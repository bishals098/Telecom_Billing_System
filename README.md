# Telecom Billing System

This is a simple C program for managing customer records in a Telecom Billing System. It allows you to add, view, search, modify, and delete customer records, as well as view payments.

## Features

- Add New Record
- View List of Records
- Search Record by Phone Number
- Modify Record by Phone Number
- View Payment by Phone Number
- Delete Record by Phone Number

## Getting Started

### Prerequisites

- GCC compiler

### Installation

1. Clone the repository:
    ```sh
    git clone https://github.com/bishals098/Telecom_Billing_System.git
    ```
2. Navigate to the project directory:
    ```sh
    cd Telecom_Billing_System
    ```

### Usage

1. Compile the program:
    ```sh
    gcc Telecom.c -o Telecom
    ```
2. Run the executable:
    ```sh
    ./Telecom
    ```

3. Follow the on-screen menu to manage customer records.

### Menu Options

- `1. Add New Record`: Add a new customer record by entering the name, phone number, and usage in minutes.
- `2. View List of Records`: View the list of all customer records.
- `3. Search Record`: Search for a customer record by entering the phone number.
- `4. Modify Record`: Modify an existing customer record by entering the phone number and new usage in minutes.
- `5. View Payment`: View the payment details of a customer by entering the phone number.
- `6. Delete Record`: Delete a customer record by entering the phone number.
- `7. Exit`: Exit the program.
