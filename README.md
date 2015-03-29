# cpp_brick_battle


This is the Github repository for the my Twitch stream where I make a game in C++ for the terminal.

This game does not have much to it for graphics considering it's being made to play in the Terminal (or some other equivalent)

This game cannot be played on Windows Command Prompt
Windows users who would like to play this game or fork this repo should use a terminal emulator like Cygwin
I do apologize beforehand to Windows users who would like to participate in this stream but find that setting up the environment
is difficult but I will not be here to troubleshoot or offer advice. I simply just do not have the time to do that.

As the stream goes I would be glad to explain what I am doing and why I make the decisions I make but I will not be teaching
the tools I am using. Like I said, I will be glad to answer questions as they come but do not expect a tutorial/lesson on
how to program/use the terminal/use the technologies that I use.



ABOUT THIS PROJECT

In this project, I will be making a game called Brick Battle (explained below) using C++, possibly C, and ncurses.

My development environment will be ran off of my 13-inch Macbook Pro where I will be coding straight into the Terminal
using emacs as my text editor, make to build and compile, git (obviously), and at some point(s) I'll probably end up
using tmux for multiple screens.



Brick Battle

Brick Battle is a game I conceived back sometime in 2013 that I never got around to making...That sentence is kind of a lie
because I actually have made Brick Battle before with some help from a friend of mine but once we turned out a decent alpha that
could successfully run, we called it quits and I've since lost/deleted the code.

Brick Battle is a variation of Pong with a Brick Breaker twist. It is a two player PVP game where each player has a paddle and a 
set of "Tiles" that the other player will try to break by hitting the ball back and forth with the paddles. Once you've broken all
of your opponent's tiles, you win.

There will also be a point factor. Just because you got the most points does not mean that you win, but maybe later on in development
I might implement a power-up system where you can use points to buy power ups to give you an advantage over the other player. You can
score points by clearing enemy tiles, returning the ball, or hitting the ball into coins that may or may not randomly spawn at any
time in the game.