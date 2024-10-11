{
  boost,
  cmake,
  cxxopts,
  eigen,
  #fetchFromGitHub,
  glew,
  gtest,
  lib,
  libsForQt5,
  libGL,
  metis,
  stdenv,
  tinyxml-2,
  zlib,
}:

stdenv.mkDerivation {
  pname = "sofa";
  version = "24.06.00";

  src = lib.fileset.toSource {
    root = ./.;
    fileset = lib.fileset.unions [
      ./applications
      ./Authors.txt
      ./cmake
      ./CHANGELOG.md
      ./CMakeLists.txt
      ./CMakePresets.json
      ./examples
      ./extlibs
      ./LICENSE-LGPL.md
      ./package.cmake
      ./README.md
      ./scripts
      ./share
      ./Sofa
      ./tools
    ];
  };

  propagatedNativeBuildInputs = [
    cmake
    libsForQt5.wrapQtAppsHook
  ];
  propagatedBuildInputs = [
    boost
    cxxopts
    eigen
    glew
    gtest
    libsForQt5.libqglviewer
    libGL
    metis
    tinyxml-2
    zlib
  ];

  cmakeFlags = [
    (lib.cmakeBool "SOFA_ALLOW_FETCH_DEPENDENCIES" false)
  ];

  doCheck = true;

  meta = {
    description = "Real-time multi-physics simulation with an emphasis on medical simulation";
    homepage = "https://github.com/sofa-framework/sofa";
    license = lib.licenses.lgpl21Only;
    maintainers = with lib.maintainers; [ nim65s ];
    mainProgram = "runSofa";
    platforms = lib.platforms.unix ++ lib.platforms.windows;
  };
}
