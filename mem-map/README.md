
Run the process:
```
/bin/cat &
```

Interrupt the process:
```
CTRL-Z
```

You can show the pid with jobs: 
```
# jobs -l
```

The memory map is in the /proc pseudo filesystem.
```
/proc/<pid>/maps
```

