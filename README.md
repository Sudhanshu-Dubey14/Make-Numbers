# "Make" Numbers in C++

- This code was basically written to practice [Make](https://www.gnu.org/software/make/) and [Makefile](https://en.m.wikipedia.org/wiki/Makefile).
- You can find the blogs related to this repository [here](https://hacksd.wordpress.com/2018/06/19/make/) and [there](https://hacksd.wordpress.com/2018/07/26/recursive-make/)(careful, they are in order). And I would actually recommend you to read these blogs before using this repo.
- I am not writing what the code in this repo actually does because I want you to find it out. And don't worry, it's nothing dangerous.

## Pre-requisites

1. [Git](https://git-scm.com/)
1. [GCC](https://gcc.gnu.org/)(or any of your favorite C compiler)
1. Make

Since this uses GNU Make, its specifically made for systems running Linux and its various distros. The command to get these pre-requisites in your Linux distro is:

* Debian and its derivatives

``sudo apt install git build-essential``

* CentOS like systems (Haven't really tested on it, but it should work)

``sudo yum install git gcc gcc-c++ make``

## Getting the repo

Clone this repository using the command:

``git clone https://github.com/Sudhanshu-Dubey14/Make-Numbers.git``

## Building with Make

After you have obtained the code, you just need to ``cd`` into it like:

``cd Make-Numbers`` (If you used above command to clone the repo)

And after that, just run make like:

``make``

Simple right! That's what's make was made for in the first place. After this is completed, you will find two new files in the ``build`` directory:

1. ``functions.out``
1. ``numbers.out``

You can just ``cd`` into ``build`` and the execute these files like:

``./functions.out``

``./numbers.out``

And thus find out what these files actually do!!!
