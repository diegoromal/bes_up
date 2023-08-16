#!/usr/bin/env bash

sudo echo "deb [arch=amd64] https://download.virtualbox.org/virtualbox/debian bookworm contrib" >/etc/apt/sources.list.d/virtualbox.list

wget -q https://www.virtualbox.org/download/oracle_vbox_2016.asc -O- | sudo apt-key add -
wget -q https://www.virtualbox.org/download/oracle_vbox.asc -O- | sudo apt-key add -

sudo apt update && sudo apt -y upgrade

sudo apt install -y virtualbox-7.0

exit 0
