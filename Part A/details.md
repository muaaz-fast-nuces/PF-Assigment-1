# Question No. 1
Banks face the challenge of protecting customers from fraudulent activities. Fraud often occurs
when someone gains access to another person’s account or debit card and begins making
unusual purchases. To address this, a bank wants to create a system that can automatically
monitor transactions and flag any that appears suspicious.
The system must be able to identify three types of suspicious behavior.
1. First, if a customer spends more than a fixed daily limit, the system should consider this
unusual. For example, if the daily spending limit is set at 5000, then any transaction that
causes the total spending in a day to exceed this amount should be flagged.
2. Second, if a transaction occurs in a foreign country that is not commonly used by the
customer, the system should also mark it as suspicious. For instance, if the customer
usually shops in Pakistan or the UAE, then a transaction in another country such as the
USA or UK would be unusual.
3. Third, if too many transactions are made within a short period of time, this could also be a
sign of fraud. For example, if more than three transactions occur within the same hour, the
system should treat the extra transactions as suspicious.

By applying these rules, the bank can provide a first level of protection for its customers. Any
suspicious transactions identified by the system can be reviewed by the bank’s fraud team for
further investigation. This approach allows the bank to reduce risks, protect customer accounts,
and build trust by ensuring safer financial operations.

# Question No. 2
Assume you are writing a program to help students figure out which quadrant of the graph a point
lies in. The quadrants of a graph are the four sections created by the x-axis and y-axis of a
Cartesian coordinate plane, each with distinct signs for the x and y coordinates. Starting from the
top-right and moving counterclockwise, they are:
1. Quadrant I (+x, +y)
2. Quadrant II (-x, +y)
3. Quadrant III (-x, -y)
4. Quadrant IV (+x, -y)


# Question No. 3
Suppose you are writing a program to help a person figure out if they are eligible for a driving
license or not.
An applicant will be asked a series of questions. Based on the answers, it will be decided if the
applicant is eligible for a license.
- Prompt the applicant for their age. If the age is 18 or above, ask the next question,
otherwise the applicant is ineligible.
- Ask the applicant if they have passed(P) or failed(F) their eyesight exam. If they have
passed the test, continue with the next question, otherwise inform them that they might
need a prescription for glasses.
- Ask the applicant if they have passed(P) or failed(F) their written test. If they have passed
the test, continue with the next question, otherwise inform them that they need to retake
the written test.
- Ask the applicant if they have passed (P) or failed(F) their driving test. If they have passed
the test, continue with the next question ONLY IF the user is above 60 years old. If they
are not above 60, inform them that they are eligible for the license. If they fail the test, then
they are not eligible.
- This question is only asked after the applicant has mentioned that they passed their driving
test, and if they are over 60 years of age. Ask the applicant if they have a medical fitness
certificate or not. If they have the certificate, inform them that they are eligible for the
license, otherwise they are not eligible.

# Question 4

A poker hand is represented as a sequence of exactly 5 integers, each in the range 1 to 13,
where:
• 1 represents Ace,
• 2–10 represent cards numbered 2 through 10,
• 11 represents Jack,
• 12 represents Queen,
• 13 represents King.
A hand is said to be a full house if it contains:
• three cards of one rank, and
• two cards of a different rank.
For example, the hand (1, 2, 1, 2, 1) is a full house because it contains three cards of rank 1 (Ace)
and two cards of rank 2.
