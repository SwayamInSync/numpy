#ifndef NUMPY_CORE_SRC_COMMON_UMATHMODULE_H_
#define NUMPY_CORE_SRC_COMMON_UMATHMODULE_H_

#include "ufunc_object.h"
#include "ufunc_type_resolution.h"
#include "extobj.h"  /* for the python side extobj set/get */


NPY_NO_EXPORT PyObject *
get_sfloat_dtype(PyObject *NPY_UNUSED(mod), PyObject *NPY_UNUSED(args));
NPY_NO_EXPORT PyObject *
set_sfloat_repack_pyscalars(PyObject *NPY_UNUSED(mod), PyObject *arg);

PyObject * ufunc_frompyfunc(PyObject *NPY_UNUSED(dummy), PyObject *args, PyObject *NPY_UNUSED(kwds));


int initumath(PyObject *m);

#endif  /* NUMPY_CORE_SRC_COMMON_UMATHMODULE_H_ */
