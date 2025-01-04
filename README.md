
#### Get latest Betaflight sources
```
git clone https://github.com/betaflight/betaflight.git
cd betaflight
git checkout 4.5-maintenance
```

#### clone this repo into Betaflight src
```
cd src &&
git clone https://github.com/armatar/furiosa-betaflight-config.git config
cd ..
```

#### Install build dependencies
```
make arm_sdk_install
```

#### Build targets
```
make FURIOSA_revC
make FURIOSA_revD
```

#### Locate binaries at: `betaflight/obj/`

