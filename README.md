# CoinFlipsLab

## 🔖 Background Information
A biased coin is one where the probability of it coming up heads versus tails on a coin flip is not exactly 50-50. Suppose that we have a biased coin that has a probability p of coming up heads and a probability 1−p of coming up tails. What is the expected number of heads that I would get if I flipped the coin n times? pn.
That is to say, the expected number of heads is the probability of getting a heads multiplied by the number of times you flip the coin. Put another way, H n,p follows the binomial distribution with parameters n and p.

## 🎯 Problem Statement
Your goal for this lab is to simulate biased coin flips to determine if the result above follows:

- Determine the number of flips (n) that you want to use for your coin. I would recommend starting with n=100 and then increasing it from there.
- Determine the number of trials (m) you want want to repeat for each value of n. I would recommend starting with m=10 and then increasing it from there.
- Determine the probability of getting heads (p) that you want to use for your coin. I would recommend testing a few different values.
- Flip your biased coin n times, and record the total number of times it came up “heads”.
- Record n, m, p, and the number of heads in a table. This is one data point for one trial.
- Clear your simulation and start it over. Repeat this entire process for m trials and a few different values of n and p.

## ✅ Acceptance Criteria
It is up to you how you want to store and display the final values.
At a minimum run your simulation with five different values for n, three different values for p, and m=10.
Use the data to answer the Thought-Provoking Questions.

## 📋 Dev Notes
Automate everything! You don’t need to manually update and record values for m, p, and n. Instead, set up the simulation to run all of your trials (m) for all of your step numbers (n) for a given probability of heads (p). Might I suggest some nested for loops?
This lab is very similar to This Diffusion Joke is Pretty Random. You can use your work from that lab as a reference.

## 🖥️ Example Output
As you run your simulation, your data might look something like this.

Number of Flips (n)	Trial Number (m)	Probability of Heads (p)	Number of Heads
10	1	0.5	4
10	2	0.5	5
10	3	0.5	7
10	4	0.5	4
100	1	0.75	77
100	2	0.75	82
100	3	0.75	67
100	4	0.75	71
And so on…

## 📝 Thought Provoking Questions
Create some nice visualizations of your results and attach them to your discussion post (Excel or some other graphing software is totally fine). You get to decide the best way to represent your data. Be sure to label your axes and title your plots!
Based on your results, do you agree that flipping a biased coin n times returns an expected value of np heads as outlined in the Background Information section? Why or why not?

## 💼 Add-Ons For the Portfolio
N/A

## 🔗 Useful Links
Java Project Template

## 📘 Works Cited
N/A
