CREATE TABLE friends(
	id INETGER, 
  name TEXT, 
  birthday DATE
);


INSERT INTO friends(id, name, birthday)
VALUES (1,'Jane Doe','05-30-1990');

SELECT * 
FROM friends;

INSERT INTO friends(id,name,birthday)
VALUES(2,'Austin','05-31-1990');

INSERT INTO friends(id,name,birthday)
VALUES(3,'Jennifer','05-25-1990');

UPDATE friends
SET name = 'Jane Smith'
WHERE id = 1;


ALTER TABLE friends
ADD COLUMN email TEXT;

UPDATE friends 
SET email = 'jane@codeacademy.com'
WHERE id = 1;

DELETE FROM friends 
WHERE id = 1;

SELECT * 
FROM friends;

















