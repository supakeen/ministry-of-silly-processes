# Ministry of Silly Processes

A collection of processes that misbehave, act weirdly, or are just plain
unnecessary. For use in testing or just to see if your system administration
skills are up to par.

Of special note, the processes in this repository are split into two parts. The
first set of processes are relatively benign. They do not access any
non-transient resources and do not leave anything after their execution
completes.

The second set of processes are harmful to your system. They will try to make
your system break down in non-permanent ways. If you run these processes there
is a good chance that your machine will stop responding so do not take these
these lightly.

## Setup

Clone this repository and run ``make`` to create the executables for your
system. This will build the standard set of safe processes for usage. If you
want to also create binaries for the dangerous set of processes then run
``make voidmywarranty``.

## Usage

After compiling the processes they end up in the ``bin/`` directory. You can
them with ``./bin/mosp-friendly``.

To use the dangerous set of processes you will additionally need to confirm
that you really want to to do this by providing an enviornment variable in the
following way ``VOIDMYWARRANTY=1 ./bin/mosp-DANGER-pylons``, these processes
will not start if the environment variable is not set.

## Introducing the processes

These processes are included with the Ministry of Silly Processes.

### mosp-friendly
Exits immediately with exit code 0.

### mosp-exit
Exits immediately with exit code 1.

### mosp-forever
Sleeps forever then exits with code 0.

### mosp-2020
Writes garbage on stdout, stderr, forever then exits with code 0.

### mosp-nanana
Doesn't listen to any signals, sleeps forever, then exits with code 0.

### mosp-DANGER-pylons
Tries to consume all shared resources on the system, enters a busy loop, 
ignores all signals, and then exits with code 0.
