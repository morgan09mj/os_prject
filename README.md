# os_prject
Operating Systems  project
As your assignment, you will add a new system call to xv6. This system call will
return the running processes (RUNNING & RUNNABLE) in the form of an array of
proc_info structs.
Keep in mind that the mentioned array should be sorted based on the memsize. If
somehow you end up having two or more processes with the same memsize, just
use the id (The sorting algorithm does not matter).

![image](https://user-images.githubusercontent.com/119484000/234562705-a8953851-7c79-4c4c-8f7d-f21bc6b5c88e.png)

Note
You cannot use malloc at the kernel level and it should only be used in user
programs, so you can pass an array of struct proc_info with its size to the system
call to fill the array.
# Test your system call
Now, create a program to test the new system call. Use malloc & fork to create
some new processes with different memory sizes.
# Submission
Please, upload created and changed files as a ZIP file into Quera. also, attach a
brief documentation on the works you have done and the problems you have
faced.
# Summary
1. Add a new system call, named proc_dump to return the running processes
sorted by their sizes.
2. Create a new program to test proc_dump.
3. Make sure to add the test program to the UPROGS section in Makefile.
# Useful Resources
● System Call
● XV6 GitHub
● Intro to XV6
