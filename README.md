Demo Project: Restaurant Table Reservation System
=====
Goal:
  Develop a system that will allow users to reserve tables at a restaurant.

End User - Makes reservations
- Can choose how large their party will be
- Can choose which day their reservation will be on, and what time of day they would like to reserve for
- User should be notified if the time/day doesn't work for their party size

Restaurant Owner - Oversees the restaurant
- Can add or remove tables to the system
- Report: How much money did the restaurant bring in?
- Report: How many people weren't able to get the reservations they requested
- Report: Average number of tables used

Assumptions:
- The restaurant is open from 5pm to 10pm, Monday to Saturday. 
- Each member of a party brings in $30 per visit
- Currently the frontend development is done by you, but in the future the company may want to outsource development of the frontend to another company, but doesn't wish to give the backend source code to that company.
- Built on PHP, Drupal, MySQL

Implementation Details
=====
Additional assumptions:
- A party can only spend an hour at the table
- Latest allowed reservation is for 21:00

Accounts:
- admin/admin
- owner/owner

Entity Types:
- Booking, 'restaurant' bundle: restaurant reservation
- Booking, 'catering' bundle: catering reservation - implementation skeleton only (for future functionality extension)
- Seating, 'table' bundle: a table seating object
- Seating, 'bar' bundle: a bar seating object - implementation skeleton only (for future functionality extension)