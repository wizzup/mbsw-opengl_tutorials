{ pkgs ? import <nixpkgs> {} }:
with pkgs;

stdenv.mkDerivation rec {
  name = "gl-tutorals${version}";
  version = "0.01";

  src = ./.;

  doCheck = true;

  buildInputs = with xorg; [
    cmake
    glfw
    glm

    # for freetype2
    pkg-config
    zlib
    libpng
    bzip2
    harfbuzz
  ];
}
