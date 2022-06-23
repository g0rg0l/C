#include <Python.h>
#include "cFuncs.h"

static PyObject *py_factorial(PyObject *self, PyObject *args)
{
    int n, result;

    if(!PyArg_ParseTuple(args,"i", &n))
        return NULL;

    result = _factorial(n);

    return Py_BuildValue("i", result);
}

static PyObject *py_fibonacci(PyObject *self, PyObject *args)
{
    int n, result;

    if(!PyArg_ParseTuple(args,"i", &n))
        return NULL;

    result = _fibonacci(n);

    return Py_BuildValue("i", result);
}

static PyObject *py_get_pi(PyObject *self)
{
    double result;

    result = _get_pi();

    return Py_BuildValue("d", result);
}

static PyObject *py_get_e(PyObject *self)
{
    double result;

    result = _get_e();

    return Py_BuildValue("d", result);
}

static PyObject *py_sin(PyObject *self, PyObject *args)
{
    double result, angle;

    if(!PyArg_ParseTuple(args,"d", &angle))
        return NULL;

    result = _sin(angle);

    return Py_BuildValue("d", result);
}

static PyObject *py_cos(PyObject *self, PyObject *args)
{
    double result, angle;

    if(!PyArg_ParseTuple(args,"d", &angle))
        return NULL;

    result = _cos(angle);

    return Py_BuildValue("d", result);
}

static PyObject *py_combinations(PyObject *self, PyObject *args)
{
    int result, n, k;

    if(!PyArg_ParseTuple(args,"ii", &n, &k))
        return NULL;

    result = _combinations(n, k);

    return Py_BuildValue("i", result);
}


static PyMethodDef ownmod_methods[] = {
    {"factorial", py_factorial, METH_VARARGS, "factorial function"}, // Факториал
    {"fibonacci", py_fibonacci, METH_VARARGS, "Fibonacci function"}, // Число Фиббоначи
    {"pi", py_get_pi, METH_VARARGS, "Get PI function"}, // Число Пи
    {"e", py_get_e, METH_VARARGS, "Get E function"}, // Экспонента
    {"sin", py_sin, METH_VARARGS, "Get sin of current angle in degrees"}, // Синус в градусах
    {"cos", py_cos, METH_VARARGS, "Get cos of current angle in degrees"}, // Косинус в градусах
    {"combinations", py_combinations, METH_VARARGS, "Get number of combinations from n to k"}, // Число сочетаний
    { NULL, NULL, 0, NULL }
};

/* Описываем наш модуль */
static PyModuleDef simple_module = {
    PyModuleDef_HEAD_INIT,   // обязательный макрос
    "pmath",               // my_plus.__name__
    "Python library to work with math's fuctions.", // my_plus.__doc__
    -1,
    ownmod_methods           // сюда передаем методы модуля
};

// в названии функции обязательно должен быть префикс PyInit
PyMODINIT_FUNC PyInit_pmath(void)
{
      PyObject* m;
      // создаем модуль
      m = PyModule_Create(&simple_module);
      // если все корректно, то эта проверка не проходит
      if (m == NULL)
          return NULL;
      return m;
}
