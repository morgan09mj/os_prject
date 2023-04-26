# os_prject
Operating Systems  project
As your assignment, you will add a new system call to xv6. This system call will
return the running processes (RUNNING & RUNNABLE) in the form of an array of
proc_info structs.
Keep in mind that the mentioned array should be sorted based on the memsize. If
somehow you end up having two or more processes with the same memsize, just
use the id (The sorting algorithm does not matter).
![image](https://user-images.githubusercontent.com/119484000/234562705-a8953851-7c79-4c4c-8f7d-f21bc6b5c88e.png)
