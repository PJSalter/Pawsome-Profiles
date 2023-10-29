# Pawsome-Profiles

## Table of Contents

- [Introduction](#introduction)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [Sample Input and Output](#sample-input-and-output)
- [Class Details](#class-details)
- [Conclusion](#conclusion)

## Introduction

**Pawsome-Profiles** is a C++ project that demonstrates the use of derived classes in object-oriented programming. It focuses on managing pet information, with a base class named `Pet` and a derived class called `Dog`. The base class stores common attributes such as the pet's name and age, while the derived class extends the functionality to include the dog's breed. This project is designed to showcase how inheritance and encapsulation work in C++.

## Project Structure

The project consists of the following files:

- **main.cpp**: Contains the main function where pets are created, their information is set, and details are printed.
- **Pet.h**: Header file for the base class `Pet`.
- **Dog.h**: Header file for the derived class `Dog`.
- **Pet.cpp**: Implementation file for the `Pet` class.
- **Dog.cpp**: Implementation file for the `Dog` class.

## Usage

To use the "Pawsome-Profiles" project, follow these steps:

1. Build the project using a C++ compiler. For example:

   ```bash
   g++ main.cpp Pet.cpp Dog.cpp -o pawsome_profiles
   ```

2. Run the compiled executable:

   ```bash
   ./pawsome_profiles
   ```

3. You will be prompted to enter pet information. For a generic pet, enter the name and age. For a dog pet, also enter the breed.

4. The program will display the pet's information, and for a dog, it will show the breed as well.

## Sample Input and Output

For instance, if you provide the following input:

   ```bash
   Dobby
   2
   Kreacher
   3
   German Schnauzer
   ```

The program will produce the following output:

```
Pet Information:
   Name: Dobby
   Age: 2
Pet Information:
   Name: Kreacher
   Age: 3
   Breed: German Schnauzer
```

## Class Details

### Pet Class

The `Pet` class is the base class and has the following attributes and methods:

  - ###### Attributes:

- `petName` (protected): Stores the pet's name.
- `petAge` (protected): Stores the pet's age.

  - ###### Methods:

- `SetName(string userName)`: Sets the pet's name.
- `GetName()`: Retrieves the pet's name.
- `SetAge(int userAge)`: Sets the pet's age.
- `GetAge()`: Retrieves the pet's age.
- `PrintInfo()`: Prints the pet's name and age.

### Dog Class

The `Dog` class is a derived class of `Pet` and has the following additional attributes and methods:

   - ###### Attributes:

`dogBreed` (private): Stores the dog's breed.

   - ###### Methods:

- `SetBreed(string userBreed)`: Sets the dog's breed.
- `GetBreed()`: Retrieves the dog's breed.

  ## Conclusion

  "Pawsome-Profiles" is a simple yet illustrative project that demonstrates the concepts of inheritance and encapsulation in object-oriented programming using C++. It provides a hands-on example of how to create, manage, and print pet information for both generic pets and dogs with breeds.
