# HypeCoin

## Why Hypecoin?

Too many Coins have a specific purpose, which in turn makes it hard to decide which one to buy into. With Hypecoin that purpose is limited to your imagination. We have designed a solid, fast and lightweight Currency with low power consumption mining and fast network turnover. What you do with your coin depends on your needs. Do you need a simple decentralised messaging service? Hypecoin has got you covered! Want to send money around the world without ridiculous exchange fees? Hypecoin can do that to! With open source code available to the community Hypecoin has unlimited potential in a fast pace and ever growing Cryptocurrency Market!



## Specs
- **Name:** HypeCoin
- **Ticker:** HYPE
- **Total supply:** ~42,000,000,000 HYPE
- **Algo:** Cryptonight-Lite Variant 1 (CN-Lite V7)
- **Type:** PoW
- **Wallet address prefix:** hyPEcoinZ
- **Block mine target:** 30 sec.
- **Maturity:** 40 blocks
- **Diff. Retarget:** Each block
- **Block reward:** Ever so slightly decreases over time, ~30 HYPE/block after ~5 years
- **P2P Port:** 16966
- **RPC Port:** 16969


## Roadmap

HypeCoin is still in it's early stages, we soft launched as a coin for the community on the 10th of June 2018. The project is not yet fully completed, but as we build a community we gain more Contributers and Developers.

**Year 1**: Develop both the community and the foundation of
Hypecoin to be a durable and resilient crypto alternative and to
stand out from the many hundreds of variations.

**Year 2:** Form a Solid Team of Active Developers who are
invested in the development of the network to begin
discussion and execution of a HypeNote Algorithm Variation.

**Year 3:** Utilising the HypeNote Algorithm, Redevelop the Core
Code with an All-In-One GUI Wallet, Miner and Messaging
System


## Whitepaper

HypeCoin is based on CryptoNote so you can check the CryptoNote whitepaper for now. As we add new features we will release a HypeCoin whitepaper.


## Pre-mining

No pre-mine has been made for HypeCoin. All coins are available to miners.


## Links

**Releases**
- HypeCoin: https://github.com/HazeDevelopment/HypeCoin
- HypeCoin Binaries:
- Windows - https://github.com/HazeDevelopment/HypeCoin-Windows
- Linux - https://github.com/HazeDevelopment/HypeCoin-Linux

**Services**
- Website: http://hypecoin.foundation
- Pool: http://yeahnahdunno/
- Mine HYPE for Milestones: (Comming soon!)
- Blockchain Explorer: http://hypecoin.foundation/explore
- Paper Wallet - http://hypecoin.foundation/paper-wallet
- Online HYPE CPU Miner -  http://hypecoin.foundation/cpu-mining

**Social**
- Discord: https://discord.gg/r2XW7MS


## Building HypeCoin 

### On *nix

Dependencies: GCC 4.7.3 or later, CMake 2.8.6 or later, and Boost 1.55.

You may download them from:

* http://gcc.gnu.org/
* http://www.cmake.org/
* http://www.boost.org/
* Alternatively, it may be possible to install them using a package manager.

For Ubuntu run:

```
sudo apt-get install -y build-essential python-dev gcc g++ git cmake libboost-all-dev librocksdb-dev
```

If you are using a version of Ubuntu that doesn't have librocksdb-dev, you can get it from a ppa instead:

```
sudo add-apt-repository ppa:ethcore/ethcore -y
sudo apt-get update
sudo apt-get install librocksdb-dev
```

Once dependencies are met, change directory into the HypeCoin directory where this file is located, and run 
```
make
```
The resulting executables can be found in `build/release/src`.

**Advanced options:**

* Parallel build: run `make -j<number of threads>` instead of `make`.
* Debug build: run `make build-debug`.
* Test suite: run `make test-release` to run tests in addition to building. Running `make test-debug` will do the same to the debug version.
* Building with Clang: it may be possible to use Clang instead of GCC, but this may not work everywhere. To build, run `export CC=clang CXX=clang++` before running `make`.

### On Windows
Dependencies: MSVC 2013 or later, CMake 2.8.6 or later, and Boost 1.55. You may download them from:

* http://www.microsoft.com/
* http://www.cmake.org/
* http://www.boost.org/

To build, change to a directory where this file is located, and run theas commands: 
```
mkdir build
cd build
cmake -G "Visual Studio 12 Win64" ..
```

And then do Build.
Good luck!


## Development & funding

All HypeCoin Development and infrastructure is funded out of pocket by the development team, so if you like the project and would like to help us grow, we have the following addresses for donations:

```
BTC
14uK9vfMcynswgbNR6TQuGnceYSsWYM7iN

HYPE
hyPEcoinZ7R2y4xbdkw7VmAKtXFg8B1WjXUQGWM44ENi37eCSVgoBTaYxNdWNSEHbuJPxpkvnz6gVEuEwyAAGmeQbRajSTx8EeA1tWpB
```



## Special Thanks

Cryptonote Developers, Bytecoin Developers, Monero Developers, Forknote Project, TurtleCoin Developers
