## timer
---

`timer` takes in an amount of time in seconds as an arg and rings the terminal bell forever after it has slept for that amount of time.
i made it because i wanted to wake up from my nap in front of my laptop with the terminal bell.


## example usage 
--- 

```bash      
# this will set a timer for 60 seconds
./timer 60        

# without args, this will set a timer for 2 seconds
./timer
```


## set up notes
---

```bash
# to compile
gcc timer.c -o timer  

# if you want to have `timer` accessible from everywhere 
sudo ln -s ~/<path to timer>/timer /usr/local/bin/timer
```

