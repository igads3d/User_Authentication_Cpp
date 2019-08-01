CREATE TABLE userDetails(
   Username TEXT PRIMARY KEY,
   FullName     TEXT,
   EmailAddress TEXT,
   password TEXT
);

INSERT INTO userDetails (Username, FullName, EmailAddress, password)
VALUES ('testUser123', 'Jon Snow', 'whitewolf@gmail.com', 'Bastard123');

SELECT * FROM userDetails;