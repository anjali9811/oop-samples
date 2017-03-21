#pragma once

#include "Ucn.h"

///
/// Represents a student from Sofia University
///
class Student {
private:

    ///
    /// The faculty number of the student
    ///
    /// This is an uniqie identifier used internally in SU
    ///
    unsigned int Fn;

    ///
    /// Name of the student
    ///
    /// A string, which contains all names of the person
    /// (e.g. first and second name, joined by an interval)
    ///
    char *Name;

    ///
    /// Phone number of the student
    ///
    /// A phone number, which can be used to contact
    /// the student on administrative issues
    ///
    char *Phone;

private:
    void SetNewValue(char*& ptr, const char* value);
    void CopyFrom(Student const& other);

public:
    Student();
    Student(unsigned int Fn, const char* Name, const char* Phone);
    Student(Student const& other);
    ~Student();

    Student& operator=(Student const& other);

    unsigned int GetFn() const;
    void SetFn(unsigned int value);

    const char* GetName() const;
    void SetName(const char* value);

    const char* GetPhone() const;
    void SetPhone(const char* value);

    void Print() const;
    static void PrintSizeInfo();
};