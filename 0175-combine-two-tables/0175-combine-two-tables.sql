/* Write your PL/SQL query statement below */
SELECT P.firstname , P.lastname , A.city , A.state
FROM Person P LEFT JOIN Address A ON A.personId = P.personId