context:
  Sistema::AltaRestaurant (
    nomR:     String,
    adreçaR:  String
  ):Restaurant

pre:
  Restaurant.allInstances() -> size() < 100;
  Restaurant.allInstances() -> forAll(r | r.sala.size() <= 5);

post:

  Restaurant.allInstances() -> Exists(r | r.oclIsNew() and
                                          r.nom = nomR and
                                          r.adreça = adreçaR and
                                          result = r)
context:
  Sistema::AfegirSala(
    numS:  int
    cap:  int

  )
