# Level Zero in Linux distributions

## Centos* 7, 8, Red Hat Enterprise Linux* 7

```
yum install yum-plugin-copr
yum copr enable jdanecki/intel-opencl
yum install level-zero intel-level-zero-gpu
```

## Fedora* 30, 31, 32, rawhide, Red Hat Enterprise Linux* 8, Mageia* 7

```
dnf install dnf-plugins-core
dnf copr enable jdanecki/intel-opencl
dnf install level-zero intel-level-zero-gpu
```

## OpenSUSE Leap 15.1

```
zypper addrepo -r https://copr.fedorainfracloud.org/coprs/jdanecki/intel-opencl/repo/opensuse-leap-15.1/jdanecki-intel-opencl-opensuse-leap-15.1.repo
zypper install level-zero intel-level-zero-gpu
```

## OpenSUSE tumbleweed

```
zypper addrepo -r https://copr.fedorainfracloud.org/coprs/jdanecki/intel-opencl/repo/opensuse-tumbleweed/jdanecki-intel-opencl-opensuse-tumbleweed.repo
zypper install level-zero intel-level-zero-gpu
```

## Ubuntu* ppa for 18.04, 19.10, 20.04

```
add-apt-repository ppa:intel-opencl/intel-opencl
apt update
apt install libze-loader libze-intel-gpu
```

## Building and installation

* [Level Zero loader](https://github.com/oneapi-src/level-zero#building-and-installing)
* [Ubuntu*](https://github.com/intel/compute-runtime/blob/master/level_zero/doc/BUILD.md)
* Scripts to build or download rpm (copr) and deb (github and ppa) packages are available in [neo-specs](https://github.com/JacekDanecki/neo-specs) repository.

(*) Other names and brands may be claimed as property of others.
