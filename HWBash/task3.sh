echo "HELLO_i_AM_a_WORKER,$(hostname)" | nc -N $MASTER_SERVER 12345
nc -l -p 6789