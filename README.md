
# install build utils and libraries
```
apt-get install -y nasm make build-essential ruby gdb libseccomp libcap-dev tmux
gem install mdless
```

# docker
```
sudo apt-get install \
    apt-transport-https \
    ca-certificates \
    curl \
    gnupg-agent \
    software-properties-common
curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo apt-key add -

sudo apt-key fingerprint 0EBFCD88

sudo add-apt-repository \
   "deb [arch=amd64] https://download.docker.com/linux/ubuntu \
   $(lsb_release -cs) \
   stable"

sudo apt-get update
sudo apt-get install docker-ce docker-ce-cli containerd.io
sudo docker run hello-world
```

# todo 
- user add to docker
- add pwndbg to /home/sba/.gdbinit "source ~/pwndbg/gdbinit.py"e
