# About this repository
This is a test directory to demonstrate the relation between git and github. 

## Files in here:
The files put into this directory are very basic C source files.
- first.c : prints numbers  from 1 to 10 onto the terminal
- greet.c : greets the user

## Compilation

Compile these files using any C compiler like **clang** or **gcc**. For gcc the command should be 
```shell
gcc -Wall -Werror first.c -o first.exe 
```
### Set up the local repository

- `cd <this-directory>`: move into this working directory(wd)
- `vim first.c greet.c README.md`:  edit these files one by one
- `git init`: initialize this wd as a git repository
- `git add ./*` : stage all the files 
- `git commit -m "initial commit"` : commit the files

###  Push to GitHub

After setting this **local** repo up on out local machine, we intend to push this to a **remote** repo on a GitHub server(another computer somewhere else in the world).

- open your GitHub account and create a new repository (public)
Accessing the github repo via the url which typically take the form: `https://github.com/User/Repository-name` can be tedious so we need to set up a **remote**.<br> remote = a connection between local computer and the public github server that will host your code.
- create a remote :`git remote add [options]... [name] [url]`

As an example the one I have used is :
```shell
git remote add my_public_repo https://www.github.com/FMajorSeventh/Test
```
> we can add a .git to the name of the github repository but it is not required

- type `git remote` to confirm the name of the remote

- now we have to **push** them into our git account online
> pushing = adding files to a public server(after making changes)
> fetching = accessing files from a public server(to make changes)
> roughly speaking, push = upload and fetch = download


```shell
git push -u [remote name] [branch]
```

in my case i would have to type :
```shell
git push -u my_public_repo master
```
At this point you should be asked for your user name and password 
to confirm that you are adding files to your own repo and not some
one elses!




