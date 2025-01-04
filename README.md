# Furiosa Betaflight Build Instructions

*Read this in other languages: [Ukrainian](README.uk.md)*

Firmware configuration for Furiosa flight controllers, compatible with Betaflight 4.5.

## Supported Hardware
- Furiosa Rev C
- Furiosa Rev D

You can find revision written on the Furiosa PCB.

## Prerequisites
- Git
- Make
- GCC
- At least 1GB free disk space
- Operating System:
  - Linux (recommended)
  - macOS
  - Windows (requires WSL or Git Bash)

## Directory Structure
```
betaflight/
├── src/
│   └── config/  <- Furiosa configuration files
└── obj/         <- Built firmware files
```

## Build Process

### 1. Clone Betaflight Repository
```bash
# Get Betaflight source code
git clone https://github.com/betaflight/betaflight.git

# Enter the directory
cd betaflight

# Switch to 4.5 maintenance branch
git checkout 4.5-maintenance
```

### 2. Add Furiosa Configuration
```bash
# Navigate to src directory and clone Furiosa config
cd src
git clone https://github.com/armatar/furiosa-betaflight-config.git config
cd ..
```

### 3. Setup Build Environment
```bash
# Install ARM toolchain
make arm_sdk_install
```

### 4. Build Firmware
```bash
# Build Revision C firmware
make FURIOSA_revC

# Build Revision D firmware
make FURIOSA_revD
```

### 5. Output Files
Compiled firmware files will be in `betaflight/obj/`:
- `betaflight_4.5.x_FURIOSA_revC.hex`
- `betaflight_4.5.x_FURIOSA_revD.hex`

## Troubleshooting

If you encounter build errors:
1. Ensure all prerequisites are installed
2. Verify you're on the correct branch (4.5-maintenance)
3. Check that the Furiosa config was cloned to the correct location (`src/config/`)
4. Try cleaning the build with `make clean` before rebuilding

## Build Time
- First build: ~5-10 minutes (includes toolchain setup)
- Subsequent builds: ~2-3 minutes per target

## Support & Community

### Getting Help
- **Furiosa Issues**: [Open an issue](https://github.com/armatar/furiosa-betaflight-config/issues)
- **Betaflight Issues**: [Betaflight Issues](https://github.com/betaflight/betaflight/issues)

### Resources
- [Betaflight Configurator](https://github.com/betaflight/betaflight-configurator/releases) - For flashing firmware
- [Betaflight Wiki](https://betaflight.com/docs) - Official Betaflight documentation

When reporting issues, please include:
- Board revision (C or D)
- Betaflight version
- Build environment details
- Error messages or logs
