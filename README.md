# OpenGL tutorials

**Original website:** http://www.mbsoftworks.sk/tutorials/opengl4/

**Original code:** https://github.com/michalbb1/opengl4-tutorials-mbsoftworks

This *fork* modify the code for running with `Nix`

* using `CMake` instead of `VisualStudio`
* remove/alter `Windows`-specific code (`MessageBox`)
* use `OpenGL 3.3` instead of `4.4` because I only have `GeForce 9500 GT` available

Assume dependencies installed correctly, `CMakeLists.txt` should be portable to use on any supported OS

## Build

### using `nix-build`

```shell
$ nix-build
```

### using `build.sh`

```shell
$ ./build.sh
```

## Dev shell

```shell
$ nix-shell
```
