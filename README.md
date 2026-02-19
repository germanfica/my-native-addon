# My Native Addon &middot; [![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

This project demonstrates how to create a native module for Node.js that adds two numbers using C++ and `node-gyp`.

| [:sparkles: Getting Started](#getting-started) | [:rocket: Installation](#installation) |
| --------------- | -------- |

<p align="center">
  <img src="https://example.com/demo.gif" /> <!-- Replace this with a relevant image of your project -->
</p>

## Getting Started
Follow these instructions to get started with the source code of the `my-native-addon` module:
- [Ensure you meet the requirements](#requirements)
- [Download the source code](#installation)
- Compile and run the project!

## Requirements
Make sure you have the following before starting:
- [Node.js and npm](https://nodejs.org/)
- Python 3.x installed
- A C++ compiler (such as GCC for Linux/Mac or Visual Studio for Windows)

## Download
You can access the `my-native-addon` source code in the following ways:
- :sparkles: Download the source code
- :fire: Clone the repository locally:
```bash
git clone https://github.com/tu-usuario/my-native-addon.git
```

## Installation

- Navigate to the project directory and install dependencies:

```bash
cd my-native-addon
npm install
npm install -g node-gyp
npm install --global windows-build-tools
```

- Restart computer:

__Note:__ This step is essential after installing `windows-build-tools` to ensure all changes to the environment and system configurations take effect.

- Build the module:

```bash
node-gyp configure
node-gyp build
```

## Run
Run the JavaScript file:

```bash
node index.js
```

## Usage

To use the module in your Node.js project, simply require it and invoke the `add` function:

```javascript
const myaddon = require('./build/Release/myaddon');
console.log('3 + 5 =', myaddon.add(3, 5));
```

## Credits
- [German Fica](https://germanfica.com/)

## External tools
None.

## License
[MIT](https://opensource.org/licenses/MIT)