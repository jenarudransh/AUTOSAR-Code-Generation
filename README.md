# AUTOSAR Code Generation for AEB System

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

AUTOSAR Code Generation for an Automatic Emergency Braking (AEB) system in ADAS.

## About The Project

This project focuses on the development and AUTOSAR-compliant code generation for an **Automatic Emergency Braking (AEB)** system, a key component of Advanced Driver-Assistance Systems (ADAS). The system is modeled using Simulink.

The repository includes Simulink models (`.slx`) that define the control logic and the main system for the AEB. It is configured for generating AUTOSAR-compliant code, bridging the gap between model-based design (MBD) and automotive software implementation.

### Key Features

* **AEB System Model:** `Automatic_Braking_System.slx` contains the top-level model of the AEB system.
* **Control Logic:** `AEBControlLogicUnits.slx` defines the core control algorithms and state logic for the braking system.
* **Code Generation:** `AEB.CodeGeneration.slx` and the `AEB_CodeGeneration` folder are configured for generating AUTOSAR-compliant code from the Simulink models.
* **Model-Based Design:** Utilizes MATLAB & Simulink for system modeling, simulation, and verification.

## Getting Started

To get a local copy up and running, follow these steps.

### Prerequisites

You will need a compatible version of MATLAB and Simulink with the following toolboxes:
* Simulink
* Embedded Coder
* AUTOSAR Blockset

### Installation

1.  Clone the repo:
    ```sh
    git clone [https://github.com/jenarudransh/AUTOSAR-Code-Generation.git](https://github.com/jenarudransh/AUTOSAR-Code-Generation.git)
    ```
2.  Open MATLAB.
3.  Navigate to the cloned directory and open the `.slx` files.

## Usage

1.  Open the main system model `Automatic_Braking_System.slx` to run simulations and test the AEB logic.
2.  Explore `AEBControlLogicUnits.slx` to understand the detailed control logic.
3.  Use the `AEB.CodeGeneration.slx` model to initiate the code generation process, which will produce AUTOSAR-compliant C code in the `AEB_CodeGeneration` directory.

## File Structure
. ├── AEB_CodeGeneration/ # Output directory for generated code ├── AEBControlLogicUnits.slx # Simulink model for control logic units ├── AEB.CodeGeneration.slx # Simulink model configured for code generation ├── Automatic_Braking_System.slx # Main Simulink model for the AEB system ├── LICENSE # MIT License └── README.md # This README file
