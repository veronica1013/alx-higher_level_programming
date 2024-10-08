#ifndef PYTHON_H
#define PYTHON_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ob_refcnt;
    struct _typeobject *ob_type;
} PyObject;

typedef struct {
    PyObject ob_base;
    long ob_size; /* Number of items in the array */
} PyListObject;

typedef struct {
    PyObject ob_base;
    // Other members...
} PyStringObject;

// Function declarations
void PyErr_SetString(PyObject *type, const char *message);
PyObject *PyUnicode_FromString(const char *u);
int PyObject_Print(PyObject *o, FILE *fp, int flags);
void Py_INCREF(PyObject *o);
void Py_DECREF(PyObject *o);

#define PyUnicode_Check(op) ( ((PyObject *)op)->ob_type->tp_name == "str")

#endif /* PYTHON_H */
