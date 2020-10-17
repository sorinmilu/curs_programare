-- aceasta comanda poate fi rulata doar daca exista un server de baze de date care are creata o baza de date
-- cu structura specificata in fisierul conducatori_create_database.sql
-- presupunand ca acea baza de date exista si ca se numeste conducatori
-- presupunand ca serverul are un utilizator numit root
-- se poate rula comanda:

-- mysql -u root -p conducatori < conducatori.sql

-- alternativ, comanda se poate rula intr-un sistem de management gen mysql workbench sau phpmyadmin

SELECT persoane.nume from persoane
JOIN persoane_vehicule on persoane_vehicule.persoana_id=persoane.id
JOIN vehicule on vehicule.id=persoane_vehicule.vehicul_id
WHERE vehicule.nume='bicicleta'
