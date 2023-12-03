# Dotfiles
My dotfiles and automated install for dwm on multiple distro's

## WIP

### TODO:

- Support more distribution install scripts (Currently only Ubuntu)
- Automatically import and enable wireguard config from external drive
- Automatically import all private ssh keys from external source
- Support more display managers
- Add st patch for mouse scrollback
- Add click and scroll support for Dwm Blocks
- Add gnome configuration to dotfiles

## Instructions

1. Open a terminal and do:
```
sudo apt update
sudo apt install git
cd ~/
git clone https://github.com/simbaclaws/Dotfiles.git
```


2. Copy all files from Dotfiles to your home folder:
```
sudo cp -R ~/Dotfiles/.* ~/
sudo cp -R ~/Dotfiles/* ~/
sudo chown -R $USER:$USER ~/
sudo rm -rf ~/.git
```

3. Run the install script for your OS:
```
bash ~/.local/share/bin/ubuntuinstall
```

4. Follow the instructions in the install script and reboot your system afterwards.

5. When logging in to your display manager, change the window manager to Dwm.
**Note: Currently only GDM is supported.**

6. Setup should now be complete, enjoy.

## Changes

If you want, you can change the install scripts according to which software you want to install.
