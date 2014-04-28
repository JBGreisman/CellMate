
struct pyopencv_Algorithm_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_Algorithm_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".Algorithm",
    sizeof(pyopencv_Algorithm_t),
};

static void pyopencv_Algorithm_dealloc(PyObject* self)
{
    ((pyopencv_Algorithm_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::Algorithm>& r)
{
    pyopencv_Algorithm_t *m = PyObject_NEW(pyopencv_Algorithm_t, &pyopencv_Algorithm_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::Algorithm>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_Algorithm_Type))
    {
        failmsg("Expected cv::Algorithm for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_Algorithm_t*)src)->v.dynamicCast<cv::Algorithm>();
    return true;
}


struct pyopencv_AlignExposures_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_AlignExposures_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".AlignExposures",
    sizeof(pyopencv_AlignExposures_t),
};

static void pyopencv_AlignExposures_dealloc(PyObject* self)
{
    ((pyopencv_AlignExposures_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::AlignExposures>& r)
{
    pyopencv_AlignExposures_t *m = PyObject_NEW(pyopencv_AlignExposures_t, &pyopencv_AlignExposures_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::AlignExposures>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_AlignExposures_Type))
    {
        failmsg("Expected cv::AlignExposures for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_AlignExposures_t*)src)->v.dynamicCast<cv::AlignExposures>();
    return true;
}


struct pyopencv_AlignMTB_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_AlignMTB_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".AlignMTB",
    sizeof(pyopencv_AlignMTB_t),
};

static void pyopencv_AlignMTB_dealloc(PyObject* self)
{
    ((pyopencv_AlignMTB_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::AlignMTB>& r)
{
    pyopencv_AlignMTB_t *m = PyObject_NEW(pyopencv_AlignMTB_t, &pyopencv_AlignMTB_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::AlignMTB>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_AlignMTB_Type))
    {
        failmsg("Expected cv::AlignMTB for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_AlignMTB_t*)src)->v.dynamicCast<cv::AlignMTB>();
    return true;
}


struct pyopencv_BFMatcher_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BFMatcher_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BFMatcher",
    sizeof(pyopencv_BFMatcher_t),
};

static void pyopencv_BFMatcher_dealloc(PyObject* self)
{
    ((pyopencv_BFMatcher_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BFMatcher>& r)
{
    pyopencv_BFMatcher_t *m = PyObject_NEW(pyopencv_BFMatcher_t, &pyopencv_BFMatcher_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BFMatcher>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BFMatcher_Type))
    {
        failmsg("Expected cv::BFMatcher for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BFMatcher_t*)src)->v.dynamicCast<cv::BFMatcher>();
    return true;
}


struct pyopencv_BRISK_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BRISK_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BRISK",
    sizeof(pyopencv_BRISK_t),
};

static void pyopencv_BRISK_dealloc(PyObject* self)
{
    ((pyopencv_BRISK_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BRISK>& r)
{
    pyopencv_BRISK_t *m = PyObject_NEW(pyopencv_BRISK_t, &pyopencv_BRISK_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BRISK>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BRISK_Type))
    {
        failmsg("Expected cv::BRISK for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BRISK_t*)src)->v.dynamicCast<cv::BRISK>();
    return true;
}


struct pyopencv_BackgroundSubtractor_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BackgroundSubtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BackgroundSubtractor",
    sizeof(pyopencv_BackgroundSubtractor_t),
};

static void pyopencv_BackgroundSubtractor_dealloc(PyObject* self)
{
    ((pyopencv_BackgroundSubtractor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BackgroundSubtractor>& r)
{
    pyopencv_BackgroundSubtractor_t *m = PyObject_NEW(pyopencv_BackgroundSubtractor_t, &pyopencv_BackgroundSubtractor_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BackgroundSubtractor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BackgroundSubtractor_Type))
    {
        failmsg("Expected cv::BackgroundSubtractor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BackgroundSubtractor_t*)src)->v.dynamicCast<cv::BackgroundSubtractor>();
    return true;
}


struct pyopencv_BackgroundSubtractorGMG_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BackgroundSubtractorGMG_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BackgroundSubtractorGMG",
    sizeof(pyopencv_BackgroundSubtractorGMG_t),
};

static void pyopencv_BackgroundSubtractorGMG_dealloc(PyObject* self)
{
    ((pyopencv_BackgroundSubtractorGMG_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BackgroundSubtractorGMG>& r)
{
    pyopencv_BackgroundSubtractorGMG_t *m = PyObject_NEW(pyopencv_BackgroundSubtractorGMG_t, &pyopencv_BackgroundSubtractorGMG_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BackgroundSubtractorGMG>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BackgroundSubtractorGMG_Type))
    {
        failmsg("Expected cv::BackgroundSubtractorGMG for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BackgroundSubtractorGMG_t*)src)->v.dynamicCast<cv::BackgroundSubtractorGMG>();
    return true;
}


struct pyopencv_BackgroundSubtractorKNN_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BackgroundSubtractorKNN_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BackgroundSubtractorKNN",
    sizeof(pyopencv_BackgroundSubtractorKNN_t),
};

static void pyopencv_BackgroundSubtractorKNN_dealloc(PyObject* self)
{
    ((pyopencv_BackgroundSubtractorKNN_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BackgroundSubtractorKNN>& r)
{
    pyopencv_BackgroundSubtractorKNN_t *m = PyObject_NEW(pyopencv_BackgroundSubtractorKNN_t, &pyopencv_BackgroundSubtractorKNN_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BackgroundSubtractorKNN>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BackgroundSubtractorKNN_Type))
    {
        failmsg("Expected cv::BackgroundSubtractorKNN for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BackgroundSubtractorKNN_t*)src)->v.dynamicCast<cv::BackgroundSubtractorKNN>();
    return true;
}


struct pyopencv_BackgroundSubtractorMOG_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BackgroundSubtractorMOG_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BackgroundSubtractorMOG",
    sizeof(pyopencv_BackgroundSubtractorMOG_t),
};

static void pyopencv_BackgroundSubtractorMOG_dealloc(PyObject* self)
{
    ((pyopencv_BackgroundSubtractorMOG_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BackgroundSubtractorMOG>& r)
{
    pyopencv_BackgroundSubtractorMOG_t *m = PyObject_NEW(pyopencv_BackgroundSubtractorMOG_t, &pyopencv_BackgroundSubtractorMOG_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BackgroundSubtractorMOG>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BackgroundSubtractorMOG_Type))
    {
        failmsg("Expected cv::BackgroundSubtractorMOG for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BackgroundSubtractorMOG_t*)src)->v.dynamicCast<cv::BackgroundSubtractorMOG>();
    return true;
}


struct pyopencv_BackgroundSubtractorMOG2_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BackgroundSubtractorMOG2_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BackgroundSubtractorMOG2",
    sizeof(pyopencv_BackgroundSubtractorMOG2_t),
};

static void pyopencv_BackgroundSubtractorMOG2_dealloc(PyObject* self)
{
    ((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BackgroundSubtractorMOG2>& r)
{
    pyopencv_BackgroundSubtractorMOG2_t *m = PyObject_NEW(pyopencv_BackgroundSubtractorMOG2_t, &pyopencv_BackgroundSubtractorMOG2_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BackgroundSubtractorMOG2>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BackgroundSubtractorMOG2_Type))
    {
        failmsg("Expected cv::BackgroundSubtractorMOG2 for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BackgroundSubtractorMOG2_t*)src)->v.dynamicCast<cv::BackgroundSubtractorMOG2>();
    return true;
}


struct pyopencv_BaseCascadeClassifier_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_BaseCascadeClassifier_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".BaseCascadeClassifier",
    sizeof(pyopencv_BaseCascadeClassifier_t),
};

static void pyopencv_BaseCascadeClassifier_dealloc(PyObject* self)
{
    ((pyopencv_BaseCascadeClassifier_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::BaseCascadeClassifier>& r)
{
    pyopencv_BaseCascadeClassifier_t *m = PyObject_NEW(pyopencv_BaseCascadeClassifier_t, &pyopencv_BaseCascadeClassifier_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::BaseCascadeClassifier>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_BaseCascadeClassifier_Type))
    {
        failmsg("Expected cv::BaseCascadeClassifier for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_BaseCascadeClassifier_t*)src)->v.dynamicCast<cv::BaseCascadeClassifier>();
    return true;
}


struct pyopencv_CLAHE_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_CLAHE_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".CLAHE",
    sizeof(pyopencv_CLAHE_t),
};

static void pyopencv_CLAHE_dealloc(PyObject* self)
{
    ((pyopencv_CLAHE_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::CLAHE>& r)
{
    pyopencv_CLAHE_t *m = PyObject_NEW(pyopencv_CLAHE_t, &pyopencv_CLAHE_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::CLAHE>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CLAHE_Type))
    {
        failmsg("Expected cv::CLAHE for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CLAHE_t*)src)->v.dynamicCast<cv::CLAHE>();
    return true;
}


struct pyopencv_CalibrateCRF_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_CalibrateCRF_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".CalibrateCRF",
    sizeof(pyopencv_CalibrateCRF_t),
};

static void pyopencv_CalibrateCRF_dealloc(PyObject* self)
{
    ((pyopencv_CalibrateCRF_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::CalibrateCRF>& r)
{
    pyopencv_CalibrateCRF_t *m = PyObject_NEW(pyopencv_CalibrateCRF_t, &pyopencv_CalibrateCRF_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::CalibrateCRF>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CalibrateCRF_Type))
    {
        failmsg("Expected cv::CalibrateCRF for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CalibrateCRF_t*)src)->v.dynamicCast<cv::CalibrateCRF>();
    return true;
}


struct pyopencv_CalibrateDebevec_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_CalibrateDebevec_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".CalibrateDebevec",
    sizeof(pyopencv_CalibrateDebevec_t),
};

static void pyopencv_CalibrateDebevec_dealloc(PyObject* self)
{
    ((pyopencv_CalibrateDebevec_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::CalibrateDebevec>& r)
{
    pyopencv_CalibrateDebevec_t *m = PyObject_NEW(pyopencv_CalibrateDebevec_t, &pyopencv_CalibrateDebevec_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::CalibrateDebevec>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CalibrateDebevec_Type))
    {
        failmsg("Expected cv::CalibrateDebevec for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CalibrateDebevec_t*)src)->v.dynamicCast<cv::CalibrateDebevec>();
    return true;
}


struct pyopencv_CalibrateRobertson_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_CalibrateRobertson_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".CalibrateRobertson",
    sizeof(pyopencv_CalibrateRobertson_t),
};

static void pyopencv_CalibrateRobertson_dealloc(PyObject* self)
{
    ((pyopencv_CalibrateRobertson_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::CalibrateRobertson>& r)
{
    pyopencv_CalibrateRobertson_t *m = PyObject_NEW(pyopencv_CalibrateRobertson_t, &pyopencv_CalibrateRobertson_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::CalibrateRobertson>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CalibrateRobertson_Type))
    {
        failmsg("Expected cv::CalibrateRobertson for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CalibrateRobertson_t*)src)->v.dynamicCast<cv::CalibrateRobertson>();
    return true;
}


struct pyopencv_CascadeClassifier_t
{
    PyObject_HEAD
    Ptr<cv::CascadeClassifier> v;
};

static PyTypeObject pyopencv_CascadeClassifier_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".CascadeClassifier",
    sizeof(pyopencv_CascadeClassifier_t),
};

static void pyopencv_CascadeClassifier_dealloc(PyObject* self)
{
    ((pyopencv_CascadeClassifier_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::CascadeClassifier>& r)
{
    pyopencv_CascadeClassifier_t *m = PyObject_NEW(pyopencv_CascadeClassifier_t, &pyopencv_CascadeClassifier_Type);
    new (&(m->v)) Ptr<cv::CascadeClassifier>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::CascadeClassifier>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CascadeClassifier_Type))
    {
        failmsg("Expected cv::CascadeClassifier for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CascadeClassifier_t*)src)->v.dynamicCast<cv::CascadeClassifier>();
    return true;
}


struct pyopencv_CvANN_MLP_t
{
    PyObject_HEAD
    Ptr<CvANN_MLP> v;
};

static PyTypeObject pyopencv_CvANN_MLP_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ANN_MLP",
    sizeof(pyopencv_CvANN_MLP_t),
};

static void pyopencv_CvANN_MLP_dealloc(PyObject* self)
{
    ((pyopencv_CvANN_MLP_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<CvANN_MLP>& r)
{
    pyopencv_CvANN_MLP_t *m = PyObject_NEW(pyopencv_CvANN_MLP_t, &pyopencv_CvANN_MLP_Type);
    new (&(m->v)) Ptr<CvANN_MLP>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<CvANN_MLP>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CvANN_MLP_Type))
    {
        failmsg("Expected CvANN_MLP for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CvANN_MLP_t*)src)->v.dynamicCast<CvANN_MLP>();
    return true;
}


template<> bool pyopencv_to(PyObject* src, CvANN_MLP_TrainParams& dst, const char* name);

struct pyopencv_CvBoost_t
{
    PyObject_HEAD
    Ptr<CvBoost> v;
};

static PyTypeObject pyopencv_CvBoost_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".Boost",
    sizeof(pyopencv_CvBoost_t),
};

static void pyopencv_CvBoost_dealloc(PyObject* self)
{
    ((pyopencv_CvBoost_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<CvBoost>& r)
{
    pyopencv_CvBoost_t *m = PyObject_NEW(pyopencv_CvBoost_t, &pyopencv_CvBoost_Type);
    new (&(m->v)) Ptr<CvBoost>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<CvBoost>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CvBoost_Type))
    {
        failmsg("Expected CvBoost for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CvBoost_t*)src)->v.dynamicCast<CvBoost>();
    return true;
}


template<> bool pyopencv_to(PyObject* src, CvBoostParams& dst, const char* name);

struct pyopencv_CvDTree_t
{
    PyObject_HEAD
    Ptr<CvDTree> v;
};

static PyTypeObject pyopencv_CvDTree_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".DTree",
    sizeof(pyopencv_CvDTree_t),
};

static void pyopencv_CvDTree_dealloc(PyObject* self)
{
    ((pyopencv_CvDTree_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<CvDTree>& r)
{
    pyopencv_CvDTree_t *m = PyObject_NEW(pyopencv_CvDTree_t, &pyopencv_CvDTree_Type);
    new (&(m->v)) Ptr<CvDTree>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<CvDTree>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CvDTree_Type))
    {
        failmsg("Expected CvDTree for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CvDTree_t*)src)->v.dynamicCast<CvDTree>();
    return true;
}


template<> bool pyopencv_to(PyObject* src, CvDTreeParams& dst, const char* name);

struct pyopencv_CvERTrees_t
{
    PyObject_HEAD
    Ptr<CvERTrees> v;
};

static PyTypeObject pyopencv_CvERTrees_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ERTrees",
    sizeof(pyopencv_CvERTrees_t),
};

static void pyopencv_CvERTrees_dealloc(PyObject* self)
{
    ((pyopencv_CvERTrees_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<CvERTrees>& r)
{
    pyopencv_CvERTrees_t *m = PyObject_NEW(pyopencv_CvERTrees_t, &pyopencv_CvERTrees_Type);
    new (&(m->v)) Ptr<CvERTrees>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<CvERTrees>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CvERTrees_Type))
    {
        failmsg("Expected CvERTrees for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CvERTrees_t*)src)->v.dynamicCast<CvERTrees>();
    return true;
}


struct pyopencv_CvGBTrees_t
{
    PyObject_HEAD
    Ptr<CvGBTrees> v;
};

static PyTypeObject pyopencv_CvGBTrees_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".GBTrees",
    sizeof(pyopencv_CvGBTrees_t),
};

static void pyopencv_CvGBTrees_dealloc(PyObject* self)
{
    ((pyopencv_CvGBTrees_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<CvGBTrees>& r)
{
    pyopencv_CvGBTrees_t *m = PyObject_NEW(pyopencv_CvGBTrees_t, &pyopencv_CvGBTrees_Type);
    new (&(m->v)) Ptr<CvGBTrees>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<CvGBTrees>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CvGBTrees_Type))
    {
        failmsg("Expected CvGBTrees for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CvGBTrees_t*)src)->v.dynamicCast<CvGBTrees>();
    return true;
}


template<> bool pyopencv_to(PyObject* src, CvGBTreesParams& dst, const char* name);

struct pyopencv_CvKNearest_t
{
    PyObject_HEAD
    Ptr<CvKNearest> v;
};

static PyTypeObject pyopencv_CvKNearest_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".KNearest",
    sizeof(pyopencv_CvKNearest_t),
};

static void pyopencv_CvKNearest_dealloc(PyObject* self)
{
    ((pyopencv_CvKNearest_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<CvKNearest>& r)
{
    pyopencv_CvKNearest_t *m = PyObject_NEW(pyopencv_CvKNearest_t, &pyopencv_CvKNearest_Type);
    new (&(m->v)) Ptr<CvKNearest>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<CvKNearest>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CvKNearest_Type))
    {
        failmsg("Expected CvKNearest for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CvKNearest_t*)src)->v.dynamicCast<CvKNearest>();
    return true;
}


struct pyopencv_CvNormalBayesClassifier_t
{
    PyObject_HEAD
    Ptr<CvNormalBayesClassifier> v;
};

static PyTypeObject pyopencv_CvNormalBayesClassifier_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".NormalBayesClassifier",
    sizeof(pyopencv_CvNormalBayesClassifier_t),
};

static void pyopencv_CvNormalBayesClassifier_dealloc(PyObject* self)
{
    ((pyopencv_CvNormalBayesClassifier_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<CvNormalBayesClassifier>& r)
{
    pyopencv_CvNormalBayesClassifier_t *m = PyObject_NEW(pyopencv_CvNormalBayesClassifier_t, &pyopencv_CvNormalBayesClassifier_Type);
    new (&(m->v)) Ptr<CvNormalBayesClassifier>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<CvNormalBayesClassifier>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CvNormalBayesClassifier_Type))
    {
        failmsg("Expected CvNormalBayesClassifier for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CvNormalBayesClassifier_t*)src)->v.dynamicCast<CvNormalBayesClassifier>();
    return true;
}


template<> bool pyopencv_to(PyObject* src, CvParamGrid& dst, const char* name);

template<> bool pyopencv_to(PyObject* src, CvRTParams& dst, const char* name);

struct pyopencv_CvRTrees_t
{
    PyObject_HEAD
    Ptr<CvRTrees> v;
};

static PyTypeObject pyopencv_CvRTrees_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".RTrees",
    sizeof(pyopencv_CvRTrees_t),
};

static void pyopencv_CvRTrees_dealloc(PyObject* self)
{
    ((pyopencv_CvRTrees_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<CvRTrees>& r)
{
    pyopencv_CvRTrees_t *m = PyObject_NEW(pyopencv_CvRTrees_t, &pyopencv_CvRTrees_Type);
    new (&(m->v)) Ptr<CvRTrees>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<CvRTrees>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CvRTrees_Type))
    {
        failmsg("Expected CvRTrees for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CvRTrees_t*)src)->v.dynamicCast<CvRTrees>();
    return true;
}


struct pyopencv_CvSVM_t
{
    PyObject_HEAD
    Ptr<CvSVM> v;
};

static PyTypeObject pyopencv_CvSVM_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".SVM",
    sizeof(pyopencv_CvSVM_t),
};

static void pyopencv_CvSVM_dealloc(PyObject* self)
{
    ((pyopencv_CvSVM_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<CvSVM>& r)
{
    pyopencv_CvSVM_t *m = PyObject_NEW(pyopencv_CvSVM_t, &pyopencv_CvSVM_Type);
    new (&(m->v)) Ptr<CvSVM>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<CvSVM>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CvSVM_Type))
    {
        failmsg("Expected CvSVM for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CvSVM_t*)src)->v.dynamicCast<CvSVM>();
    return true;
}


template<> bool pyopencv_to(PyObject* src, CvSVMParams& dst, const char* name);

struct pyopencv_CvStatModel_t
{
    PyObject_HEAD
    Ptr<CvStatModel> v;
};

static PyTypeObject pyopencv_CvStatModel_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".StatModel",
    sizeof(pyopencv_CvStatModel_t),
};

static void pyopencv_CvStatModel_dealloc(PyObject* self)
{
    ((pyopencv_CvStatModel_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<CvStatModel>& r)
{
    pyopencv_CvStatModel_t *m = PyObject_NEW(pyopencv_CvStatModel_t, &pyopencv_CvStatModel_Type);
    new (&(m->v)) Ptr<CvStatModel>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<CvStatModel>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_CvStatModel_Type))
    {
        failmsg("Expected CvStatModel for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_CvStatModel_t*)src)->v.dynamicCast<CvStatModel>();
    return true;
}


struct pyopencv_DMatch_t
{
    PyObject_HEAD
    cv::DMatch v;
};

static PyTypeObject pyopencv_DMatch_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".DMatch",
    sizeof(pyopencv_DMatch_t),
};

static void pyopencv_DMatch_dealloc(PyObject* self)
{
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const cv::DMatch& r)
{
    pyopencv_DMatch_t *m = PyObject_NEW(pyopencv_DMatch_t, &pyopencv_DMatch_Type);
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, cv::DMatch& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_DMatch_Type))
    {
        failmsg("Expected cv::DMatch for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_DMatch_t*)src)->v;
    return true;
}

struct pyopencv_DenseFeatureDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_DenseFeatureDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".DenseFeatureDetector",
    sizeof(pyopencv_DenseFeatureDetector_t),
};

static void pyopencv_DenseFeatureDetector_dealloc(PyObject* self)
{
    ((pyopencv_DenseFeatureDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::DenseFeatureDetector>& r)
{
    pyopencv_DenseFeatureDetector_t *m = PyObject_NEW(pyopencv_DenseFeatureDetector_t, &pyopencv_DenseFeatureDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::DenseFeatureDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_DenseFeatureDetector_Type))
    {
        failmsg("Expected cv::DenseFeatureDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_DenseFeatureDetector_t*)src)->v.dynamicCast<cv::DenseFeatureDetector>();
    return true;
}


struct pyopencv_DescriptorExtractor_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_DescriptorExtractor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".DescriptorExtractor",
    sizeof(pyopencv_DescriptorExtractor_t),
};

static void pyopencv_DescriptorExtractor_dealloc(PyObject* self)
{
    ((pyopencv_DescriptorExtractor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::DescriptorExtractor>& r)
{
    pyopencv_DescriptorExtractor_t *m = PyObject_NEW(pyopencv_DescriptorExtractor_t, &pyopencv_DescriptorExtractor_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::DescriptorExtractor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_DescriptorExtractor_Type))
    {
        failmsg("Expected cv::DescriptorExtractor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_DescriptorExtractor_t*)src)->v.dynamicCast<cv::DescriptorExtractor>();
    return true;
}


struct pyopencv_DescriptorMatcher_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_DescriptorMatcher_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".DescriptorMatcher",
    sizeof(pyopencv_DescriptorMatcher_t),
};

static void pyopencv_DescriptorMatcher_dealloc(PyObject* self)
{
    ((pyopencv_DescriptorMatcher_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::DescriptorMatcher>& r)
{
    pyopencv_DescriptorMatcher_t *m = PyObject_NEW(pyopencv_DescriptorMatcher_t, &pyopencv_DescriptorMatcher_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::DescriptorMatcher>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_DescriptorMatcher_Type))
    {
        failmsg("Expected cv::DescriptorMatcher for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_DescriptorMatcher_t*)src)->v.dynamicCast<cv::DescriptorMatcher>();
    return true;
}


struct pyopencv_EM_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_EM_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".EM",
    sizeof(pyopencv_EM_t),
};

static void pyopencv_EM_dealloc(PyObject* self)
{
    ((pyopencv_EM_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::EM>& r)
{
    pyopencv_EM_t *m = PyObject_NEW(pyopencv_EM_t, &pyopencv_EM_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::EM>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_EM_Type))
    {
        failmsg("Expected cv::EM for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_EM_t*)src)->v.dynamicCast<cv::EM>();
    return true;
}


struct pyopencv_FaceRecognizer_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_FaceRecognizer_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".FaceRecognizer",
    sizeof(pyopencv_FaceRecognizer_t),
};

static void pyopencv_FaceRecognizer_dealloc(PyObject* self)
{
    ((pyopencv_FaceRecognizer_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::FaceRecognizer>& r)
{
    pyopencv_FaceRecognizer_t *m = PyObject_NEW(pyopencv_FaceRecognizer_t, &pyopencv_FaceRecognizer_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::FaceRecognizer>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_FaceRecognizer_Type))
    {
        failmsg("Expected cv::FaceRecognizer for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_FaceRecognizer_t*)src)->v.dynamicCast<cv::FaceRecognizer>();
    return true;
}


struct pyopencv_FastFeatureDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_FastFeatureDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".FastFeatureDetector",
    sizeof(pyopencv_FastFeatureDetector_t),
};

static void pyopencv_FastFeatureDetector_dealloc(PyObject* self)
{
    ((pyopencv_FastFeatureDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::FastFeatureDetector>& r)
{
    pyopencv_FastFeatureDetector_t *m = PyObject_NEW(pyopencv_FastFeatureDetector_t, &pyopencv_FastFeatureDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::FastFeatureDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_FastFeatureDetector_Type))
    {
        failmsg("Expected cv::FastFeatureDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_FastFeatureDetector_t*)src)->v.dynamicCast<cv::FastFeatureDetector>();
    return true;
}


struct pyopencv_Feature2D_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_Feature2D_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".Feature2D",
    sizeof(pyopencv_Feature2D_t),
};

static void pyopencv_Feature2D_dealloc(PyObject* self)
{
    ((pyopencv_Feature2D_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::Feature2D>& r)
{
    pyopencv_Feature2D_t *m = PyObject_NEW(pyopencv_Feature2D_t, &pyopencv_Feature2D_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::Feature2D>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_Feature2D_Type))
    {
        failmsg("Expected cv::Feature2D for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_Feature2D_t*)src)->v.dynamicCast<cv::Feature2D>();
    return true;
}


struct pyopencv_FeatureDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_FeatureDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".FeatureDetector",
    sizeof(pyopencv_FeatureDetector_t),
};

static void pyopencv_FeatureDetector_dealloc(PyObject* self)
{
    ((pyopencv_FeatureDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::FeatureDetector>& r)
{
    pyopencv_FeatureDetector_t *m = PyObject_NEW(pyopencv_FeatureDetector_t, &pyopencv_FeatureDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::FeatureDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_FeatureDetector_Type))
    {
        failmsg("Expected cv::FeatureDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_FeatureDetector_t*)src)->v.dynamicCast<cv::FeatureDetector>();
    return true;
}


struct pyopencv_FileNode_t
{
    PyObject_HEAD
    cv::FileNode v;
};

static PyTypeObject pyopencv_FileNode_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".FileNode",
    sizeof(pyopencv_FileNode_t),
};

static void pyopencv_FileNode_dealloc(PyObject* self)
{
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const cv::FileNode& r)
{
    pyopencv_FileNode_t *m = PyObject_NEW(pyopencv_FileNode_t, &pyopencv_FileNode_Type);
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, cv::FileNode& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_FileNode_Type))
    {
        failmsg("Expected cv::FileNode for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_FileNode_t*)src)->v;
    return true;
}

struct pyopencv_FileStorage_t
{
    PyObject_HEAD
    Ptr<cv::FileStorage> v;
};

static PyTypeObject pyopencv_FileStorage_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".FileStorage",
    sizeof(pyopencv_FileStorage_t),
};

static void pyopencv_FileStorage_dealloc(PyObject* self)
{
    ((pyopencv_FileStorage_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::FileStorage>& r)
{
    pyopencv_FileStorage_t *m = PyObject_NEW(pyopencv_FileStorage_t, &pyopencv_FileStorage_Type);
    new (&(m->v)) Ptr<cv::FileStorage>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::FileStorage>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_FileStorage_Type))
    {
        failmsg("Expected cv::FileStorage for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_FileStorage_t*)src)->v.dynamicCast<cv::FileStorage>();
    return true;
}


struct pyopencv_FlannBasedMatcher_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_FlannBasedMatcher_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".FlannBasedMatcher",
    sizeof(pyopencv_FlannBasedMatcher_t),
};

static void pyopencv_FlannBasedMatcher_dealloc(PyObject* self)
{
    ((pyopencv_FlannBasedMatcher_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::FlannBasedMatcher>& r)
{
    pyopencv_FlannBasedMatcher_t *m = PyObject_NEW(pyopencv_FlannBasedMatcher_t, &pyopencv_FlannBasedMatcher_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::FlannBasedMatcher>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_FlannBasedMatcher_Type))
    {
        failmsg("Expected cv::FlannBasedMatcher for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_FlannBasedMatcher_t*)src)->v.dynamicCast<cv::FlannBasedMatcher>();
    return true;
}


struct pyopencv_GFTTDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_GFTTDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".GFTTDetector",
    sizeof(pyopencv_GFTTDetector_t),
};

static void pyopencv_GFTTDetector_dealloc(PyObject* self)
{
    ((pyopencv_GFTTDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::GFTTDetector>& r)
{
    pyopencv_GFTTDetector_t *m = PyObject_NEW(pyopencv_GFTTDetector_t, &pyopencv_GFTTDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::GFTTDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_GFTTDetector_Type))
    {
        failmsg("Expected cv::GFTTDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_GFTTDetector_t*)src)->v.dynamicCast<cv::GFTTDetector>();
    return true;
}


struct pyopencv_GridAdaptedFeatureDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_GridAdaptedFeatureDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".GridAdaptedFeatureDetector",
    sizeof(pyopencv_GridAdaptedFeatureDetector_t),
};

static void pyopencv_GridAdaptedFeatureDetector_dealloc(PyObject* self)
{
    ((pyopencv_GridAdaptedFeatureDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::GridAdaptedFeatureDetector>& r)
{
    pyopencv_GridAdaptedFeatureDetector_t *m = PyObject_NEW(pyopencv_GridAdaptedFeatureDetector_t, &pyopencv_GridAdaptedFeatureDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::GridAdaptedFeatureDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_GridAdaptedFeatureDetector_Type))
    {
        failmsg("Expected cv::GridAdaptedFeatureDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_GridAdaptedFeatureDetector_t*)src)->v.dynamicCast<cv::GridAdaptedFeatureDetector>();
    return true;
}


struct pyopencv_HOGDescriptor_t
{
    PyObject_HEAD
    Ptr<cv::HOGDescriptor> v;
};

static PyTypeObject pyopencv_HOGDescriptor_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".HOGDescriptor",
    sizeof(pyopencv_HOGDescriptor_t),
};

static void pyopencv_HOGDescriptor_dealloc(PyObject* self)
{
    ((pyopencv_HOGDescriptor_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::HOGDescriptor>& r)
{
    pyopencv_HOGDescriptor_t *m = PyObject_NEW(pyopencv_HOGDescriptor_t, &pyopencv_HOGDescriptor_Type);
    new (&(m->v)) Ptr<cv::HOGDescriptor>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::HOGDescriptor>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_HOGDescriptor_Type))
    {
        failmsg("Expected cv::HOGDescriptor for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_HOGDescriptor_t*)src)->v.dynamicCast<cv::HOGDescriptor>();
    return true;
}


struct pyopencv_KDTree_t
{
    PyObject_HEAD
    Ptr<cv::KDTree> v;
};

static PyTypeObject pyopencv_KDTree_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".KDTree",
    sizeof(pyopencv_KDTree_t),
};

static void pyopencv_KDTree_dealloc(PyObject* self)
{
    ((pyopencv_KDTree_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::KDTree>& r)
{
    pyopencv_KDTree_t *m = PyObject_NEW(pyopencv_KDTree_t, &pyopencv_KDTree_Type);
    new (&(m->v)) Ptr<cv::KDTree>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::KDTree>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_KDTree_Type))
    {
        failmsg("Expected cv::KDTree for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_KDTree_t*)src)->v.dynamicCast<cv::KDTree>();
    return true;
}


struct pyopencv_KalmanFilter_t
{
    PyObject_HEAD
    Ptr<cv::KalmanFilter> v;
};

static PyTypeObject pyopencv_KalmanFilter_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".KalmanFilter",
    sizeof(pyopencv_KalmanFilter_t),
};

static void pyopencv_KalmanFilter_dealloc(PyObject* self)
{
    ((pyopencv_KalmanFilter_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::KalmanFilter>& r)
{
    pyopencv_KalmanFilter_t *m = PyObject_NEW(pyopencv_KalmanFilter_t, &pyopencv_KalmanFilter_Type);
    new (&(m->v)) Ptr<cv::KalmanFilter>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::KalmanFilter>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_KalmanFilter_Type))
    {
        failmsg("Expected cv::KalmanFilter for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_KalmanFilter_t*)src)->v.dynamicCast<cv::KalmanFilter>();
    return true;
}


struct pyopencv_KeyPoint_t
{
    PyObject_HEAD
    cv::KeyPoint v;
};

static PyTypeObject pyopencv_KeyPoint_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".KeyPoint",
    sizeof(pyopencv_KeyPoint_t),
};

static void pyopencv_KeyPoint_dealloc(PyObject* self)
{
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const cv::KeyPoint& r)
{
    pyopencv_KeyPoint_t *m = PyObject_NEW(pyopencv_KeyPoint_t, &pyopencv_KeyPoint_Type);
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, cv::KeyPoint& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_KeyPoint_Type))
    {
        failmsg("Expected cv::KeyPoint for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_KeyPoint_t*)src)->v;
    return true;
}

struct pyopencv_LineSegmentDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_LineSegmentDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".LineSegmentDetector",
    sizeof(pyopencv_LineSegmentDetector_t),
};

static void pyopencv_LineSegmentDetector_dealloc(PyObject* self)
{
    ((pyopencv_LineSegmentDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::LineSegmentDetector>& r)
{
    pyopencv_LineSegmentDetector_t *m = PyObject_NEW(pyopencv_LineSegmentDetector_t, &pyopencv_LineSegmentDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::LineSegmentDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_LineSegmentDetector_Type))
    {
        failmsg("Expected cv::LineSegmentDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_LineSegmentDetector_t*)src)->v.dynamicCast<cv::LineSegmentDetector>();
    return true;
}


struct pyopencv_MSER_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_MSER_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".MSER",
    sizeof(pyopencv_MSER_t),
};

static void pyopencv_MSER_dealloc(PyObject* self)
{
    ((pyopencv_MSER_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::MSER>& r)
{
    pyopencv_MSER_t *m = PyObject_NEW(pyopencv_MSER_t, &pyopencv_MSER_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::MSER>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_MSER_Type))
    {
        failmsg("Expected cv::MSER for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_MSER_t*)src)->v.dynamicCast<cv::MSER>();
    return true;
}


struct pyopencv_MergeDebevec_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_MergeDebevec_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".MergeDebevec",
    sizeof(pyopencv_MergeDebevec_t),
};

static void pyopencv_MergeDebevec_dealloc(PyObject* self)
{
    ((pyopencv_MergeDebevec_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::MergeDebevec>& r)
{
    pyopencv_MergeDebevec_t *m = PyObject_NEW(pyopencv_MergeDebevec_t, &pyopencv_MergeDebevec_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::MergeDebevec>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_MergeDebevec_Type))
    {
        failmsg("Expected cv::MergeDebevec for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_MergeDebevec_t*)src)->v.dynamicCast<cv::MergeDebevec>();
    return true;
}


struct pyopencv_MergeExposures_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_MergeExposures_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".MergeExposures",
    sizeof(pyopencv_MergeExposures_t),
};

static void pyopencv_MergeExposures_dealloc(PyObject* self)
{
    ((pyopencv_MergeExposures_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::MergeExposures>& r)
{
    pyopencv_MergeExposures_t *m = PyObject_NEW(pyopencv_MergeExposures_t, &pyopencv_MergeExposures_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::MergeExposures>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_MergeExposures_Type))
    {
        failmsg("Expected cv::MergeExposures for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_MergeExposures_t*)src)->v.dynamicCast<cv::MergeExposures>();
    return true;
}


struct pyopencv_MergeMertens_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_MergeMertens_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".MergeMertens",
    sizeof(pyopencv_MergeMertens_t),
};

static void pyopencv_MergeMertens_dealloc(PyObject* self)
{
    ((pyopencv_MergeMertens_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::MergeMertens>& r)
{
    pyopencv_MergeMertens_t *m = PyObject_NEW(pyopencv_MergeMertens_t, &pyopencv_MergeMertens_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::MergeMertens>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_MergeMertens_Type))
    {
        failmsg("Expected cv::MergeMertens for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_MergeMertens_t*)src)->v.dynamicCast<cv::MergeMertens>();
    return true;
}


struct pyopencv_MergeRobertson_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_MergeRobertson_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".MergeRobertson",
    sizeof(pyopencv_MergeRobertson_t),
};

static void pyopencv_MergeRobertson_dealloc(PyObject* self)
{
    ((pyopencv_MergeRobertson_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::MergeRobertson>& r)
{
    pyopencv_MergeRobertson_t *m = PyObject_NEW(pyopencv_MergeRobertson_t, &pyopencv_MergeRobertson_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::MergeRobertson>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_MergeRobertson_Type))
    {
        failmsg("Expected cv::MergeRobertson for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_MergeRobertson_t*)src)->v.dynamicCast<cv::MergeRobertson>();
    return true;
}


template<> bool pyopencv_to(PyObject* src, cv::Moments& dst, const char* name);

struct pyopencv_ORB_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_ORB_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".ORB",
    sizeof(pyopencv_ORB_t),
};

static void pyopencv_ORB_dealloc(PyObject* self)
{
    ((pyopencv_ORB_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::ORB>& r)
{
    pyopencv_ORB_t *m = PyObject_NEW(pyopencv_ORB_t, &pyopencv_ORB_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::ORB>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_ORB_Type))
    {
        failmsg("Expected cv::ORB for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_ORB_t*)src)->v.dynamicCast<cv::ORB>();
    return true;
}


struct pyopencv_PyramidAdaptedFeatureDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_PyramidAdaptedFeatureDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".PyramidAdaptedFeatureDetector",
    sizeof(pyopencv_PyramidAdaptedFeatureDetector_t),
};

static void pyopencv_PyramidAdaptedFeatureDetector_dealloc(PyObject* self)
{
    ((pyopencv_PyramidAdaptedFeatureDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::PyramidAdaptedFeatureDetector>& r)
{
    pyopencv_PyramidAdaptedFeatureDetector_t *m = PyObject_NEW(pyopencv_PyramidAdaptedFeatureDetector_t, &pyopencv_PyramidAdaptedFeatureDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::PyramidAdaptedFeatureDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_PyramidAdaptedFeatureDetector_Type))
    {
        failmsg("Expected cv::PyramidAdaptedFeatureDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_PyramidAdaptedFeatureDetector_t*)src)->v.dynamicCast<cv::PyramidAdaptedFeatureDetector>();
    return true;
}


struct pyopencv_SIFT_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_SIFT_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".SIFT",
    sizeof(pyopencv_SIFT_t),
};

static void pyopencv_SIFT_dealloc(PyObject* self)
{
    ((pyopencv_SIFT_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::SIFT>& r)
{
    pyopencv_SIFT_t *m = PyObject_NEW(pyopencv_SIFT_t, &pyopencv_SIFT_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::SIFT>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_SIFT_Type))
    {
        failmsg("Expected cv::SIFT for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_SIFT_t*)src)->v.dynamicCast<cv::SIFT>();
    return true;
}


struct pyopencv_SURF_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_SURF_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".SURF",
    sizeof(pyopencv_SURF_t),
};

static void pyopencv_SURF_dealloc(PyObject* self)
{
    ((pyopencv_SURF_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::SURF>& r)
{
    pyopencv_SURF_t *m = PyObject_NEW(pyopencv_SURF_t, &pyopencv_SURF_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::SURF>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_SURF_Type))
    {
        failmsg("Expected cv::SURF for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_SURF_t*)src)->v.dynamicCast<cv::SURF>();
    return true;
}


struct pyopencv_SimpleBlobDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_SimpleBlobDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".SimpleBlobDetector",
    sizeof(pyopencv_SimpleBlobDetector_t),
};

static void pyopencv_SimpleBlobDetector_dealloc(PyObject* self)
{
    ((pyopencv_SimpleBlobDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::SimpleBlobDetector>& r)
{
    pyopencv_SimpleBlobDetector_t *m = PyObject_NEW(pyopencv_SimpleBlobDetector_t, &pyopencv_SimpleBlobDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::SimpleBlobDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_SimpleBlobDetector_Type))
    {
        failmsg("Expected cv::SimpleBlobDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_SimpleBlobDetector_t*)src)->v.dynamicCast<cv::SimpleBlobDetector>();
    return true;
}


struct pyopencv_SimpleBlobDetector_Params_t
{
    PyObject_HEAD
    cv::SimpleBlobDetector::Params v;
};

static PyTypeObject pyopencv_SimpleBlobDetector_Params_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".SimpleBlobDetector_Params",
    sizeof(pyopencv_SimpleBlobDetector_Params_t),
};

static void pyopencv_SimpleBlobDetector_Params_dealloc(PyObject* self)
{
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const cv::SimpleBlobDetector::Params& r)
{
    pyopencv_SimpleBlobDetector_Params_t *m = PyObject_NEW(pyopencv_SimpleBlobDetector_Params_t, &pyopencv_SimpleBlobDetector_Params_Type);
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, cv::SimpleBlobDetector::Params& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_SimpleBlobDetector_Params_Type))
    {
        failmsg("Expected cv::SimpleBlobDetector::Params for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_SimpleBlobDetector_Params_t*)src)->v;
    return true;
}

struct pyopencv_StarDetector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_StarDetector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".StarDetector",
    sizeof(pyopencv_StarDetector_t),
};

static void pyopencv_StarDetector_dealloc(PyObject* self)
{
    ((pyopencv_StarDetector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::StarDetector>& r)
{
    pyopencv_StarDetector_t *m = PyObject_NEW(pyopencv_StarDetector_t, &pyopencv_StarDetector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::StarDetector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_StarDetector_Type))
    {
        failmsg("Expected cv::StarDetector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_StarDetector_t*)src)->v.dynamicCast<cv::StarDetector>();
    return true;
}


struct pyopencv_StereoBM_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_StereoBM_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".StereoBM",
    sizeof(pyopencv_StereoBM_t),
};

static void pyopencv_StereoBM_dealloc(PyObject* self)
{
    ((pyopencv_StereoBM_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::StereoBM>& r)
{
    pyopencv_StereoBM_t *m = PyObject_NEW(pyopencv_StereoBM_t, &pyopencv_StereoBM_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::StereoBM>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_StereoBM_Type))
    {
        failmsg("Expected cv::StereoBM for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_StereoBM_t*)src)->v.dynamicCast<cv::StereoBM>();
    return true;
}


struct pyopencv_StereoMatcher_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_StereoMatcher_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".StereoMatcher",
    sizeof(pyopencv_StereoMatcher_t),
};

static void pyopencv_StereoMatcher_dealloc(PyObject* self)
{
    ((pyopencv_StereoMatcher_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::StereoMatcher>& r)
{
    pyopencv_StereoMatcher_t *m = PyObject_NEW(pyopencv_StereoMatcher_t, &pyopencv_StereoMatcher_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::StereoMatcher>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_StereoMatcher_Type))
    {
        failmsg("Expected cv::StereoMatcher for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_StereoMatcher_t*)src)->v.dynamicCast<cv::StereoMatcher>();
    return true;
}


struct pyopencv_StereoSGBM_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_StereoSGBM_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".StereoSGBM",
    sizeof(pyopencv_StereoSGBM_t),
};

static void pyopencv_StereoSGBM_dealloc(PyObject* self)
{
    ((pyopencv_StereoSGBM_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::StereoSGBM>& r)
{
    pyopencv_StereoSGBM_t *m = PyObject_NEW(pyopencv_StereoSGBM_t, &pyopencv_StereoSGBM_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::StereoSGBM>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_StereoSGBM_Type))
    {
        failmsg("Expected cv::StereoSGBM for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_StereoSGBM_t*)src)->v.dynamicCast<cv::StereoSGBM>();
    return true;
}


struct pyopencv_StereoVar_t
{
    PyObject_HEAD
    Ptr<cv::StereoVar> v;
};

static PyTypeObject pyopencv_StereoVar_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".StereoVar",
    sizeof(pyopencv_StereoVar_t),
};

static void pyopencv_StereoVar_dealloc(PyObject* self)
{
    ((pyopencv_StereoVar_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::StereoVar>& r)
{
    pyopencv_StereoVar_t *m = PyObject_NEW(pyopencv_StereoVar_t, &pyopencv_StereoVar_Type);
    new (&(m->v)) Ptr<cv::StereoVar>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::StereoVar>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_StereoVar_Type))
    {
        failmsg("Expected cv::StereoVar for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_StereoVar_t*)src)->v.dynamicCast<cv::StereoVar>();
    return true;
}


struct pyopencv_Subdiv2D_t
{
    PyObject_HEAD
    Ptr<cv::Subdiv2D> v;
};

static PyTypeObject pyopencv_Subdiv2D_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".Subdiv2D",
    sizeof(pyopencv_Subdiv2D_t),
};

static void pyopencv_Subdiv2D_dealloc(PyObject* self)
{
    ((pyopencv_Subdiv2D_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::Subdiv2D>& r)
{
    pyopencv_Subdiv2D_t *m = PyObject_NEW(pyopencv_Subdiv2D_t, &pyopencv_Subdiv2D_Type);
    new (&(m->v)) Ptr<cv::Subdiv2D>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::Subdiv2D>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_Subdiv2D_Type))
    {
        failmsg("Expected cv::Subdiv2D for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_Subdiv2D_t*)src)->v.dynamicCast<cv::Subdiv2D>();
    return true;
}


struct pyopencv_Tonemap_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_Tonemap_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".Tonemap",
    sizeof(pyopencv_Tonemap_t),
};

static void pyopencv_Tonemap_dealloc(PyObject* self)
{
    ((pyopencv_Tonemap_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::Tonemap>& r)
{
    pyopencv_Tonemap_t *m = PyObject_NEW(pyopencv_Tonemap_t, &pyopencv_Tonemap_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::Tonemap>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_Tonemap_Type))
    {
        failmsg("Expected cv::Tonemap for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_Tonemap_t*)src)->v.dynamicCast<cv::Tonemap>();
    return true;
}


struct pyopencv_TonemapDrago_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_TonemapDrago_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".TonemapDrago",
    sizeof(pyopencv_TonemapDrago_t),
};

static void pyopencv_TonemapDrago_dealloc(PyObject* self)
{
    ((pyopencv_TonemapDrago_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::TonemapDrago>& r)
{
    pyopencv_TonemapDrago_t *m = PyObject_NEW(pyopencv_TonemapDrago_t, &pyopencv_TonemapDrago_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::TonemapDrago>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_TonemapDrago_Type))
    {
        failmsg("Expected cv::TonemapDrago for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_TonemapDrago_t*)src)->v.dynamicCast<cv::TonemapDrago>();
    return true;
}


struct pyopencv_TonemapDurand_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_TonemapDurand_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".TonemapDurand",
    sizeof(pyopencv_TonemapDurand_t),
};

static void pyopencv_TonemapDurand_dealloc(PyObject* self)
{
    ((pyopencv_TonemapDurand_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::TonemapDurand>& r)
{
    pyopencv_TonemapDurand_t *m = PyObject_NEW(pyopencv_TonemapDurand_t, &pyopencv_TonemapDurand_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::TonemapDurand>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_TonemapDurand_Type))
    {
        failmsg("Expected cv::TonemapDurand for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_TonemapDurand_t*)src)->v.dynamicCast<cv::TonemapDurand>();
    return true;
}


struct pyopencv_TonemapMantiuk_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_TonemapMantiuk_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".TonemapMantiuk",
    sizeof(pyopencv_TonemapMantiuk_t),
};

static void pyopencv_TonemapMantiuk_dealloc(PyObject* self)
{
    ((pyopencv_TonemapMantiuk_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::TonemapMantiuk>& r)
{
    pyopencv_TonemapMantiuk_t *m = PyObject_NEW(pyopencv_TonemapMantiuk_t, &pyopencv_TonemapMantiuk_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::TonemapMantiuk>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_TonemapMantiuk_Type))
    {
        failmsg("Expected cv::TonemapMantiuk for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_TonemapMantiuk_t*)src)->v.dynamicCast<cv::TonemapMantiuk>();
    return true;
}


struct pyopencv_TonemapReinhard_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_TonemapReinhard_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".TonemapReinhard",
    sizeof(pyopencv_TonemapReinhard_t),
};

static void pyopencv_TonemapReinhard_dealloc(PyObject* self)
{
    ((pyopencv_TonemapReinhard_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::TonemapReinhard>& r)
{
    pyopencv_TonemapReinhard_t *m = PyObject_NEW(pyopencv_TonemapReinhard_t, &pyopencv_TonemapReinhard_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::TonemapReinhard>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_TonemapReinhard_Type))
    {
        failmsg("Expected cv::TonemapReinhard for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_TonemapReinhard_t*)src)->v.dynamicCast<cv::TonemapReinhard>();
    return true;
}


struct pyopencv_VideoCapture_t
{
    PyObject_HEAD
    Ptr<cv::VideoCapture> v;
};

static PyTypeObject pyopencv_VideoCapture_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".VideoCapture",
    sizeof(pyopencv_VideoCapture_t),
};

static void pyopencv_VideoCapture_dealloc(PyObject* self)
{
    ((pyopencv_VideoCapture_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::VideoCapture>& r)
{
    pyopencv_VideoCapture_t *m = PyObject_NEW(pyopencv_VideoCapture_t, &pyopencv_VideoCapture_Type);
    new (&(m->v)) Ptr<cv::VideoCapture>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::VideoCapture>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_VideoCapture_Type))
    {
        failmsg("Expected cv::VideoCapture for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_VideoCapture_t*)src)->v.dynamicCast<cv::VideoCapture>();
    return true;
}


struct pyopencv_VideoWriter_t
{
    PyObject_HEAD
    Ptr<cv::VideoWriter> v;
};

static PyTypeObject pyopencv_VideoWriter_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".VideoWriter",
    sizeof(pyopencv_VideoWriter_t),
};

static void pyopencv_VideoWriter_dealloc(PyObject* self)
{
    ((pyopencv_VideoWriter_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::VideoWriter>& r)
{
    pyopencv_VideoWriter_t *m = PyObject_NEW(pyopencv_VideoWriter_t, &pyopencv_VideoWriter_Type);
    new (&(m->v)) Ptr<cv::VideoWriter>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::VideoWriter>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_VideoWriter_Type))
    {
        failmsg("Expected cv::VideoWriter for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_VideoWriter_t*)src)->v.dynamicCast<cv::VideoWriter>();
    return true;
}


struct pyopencv_flann_Index_t
{
    PyObject_HEAD
    Ptr<cv::flann::Index> v;
};

static PyTypeObject pyopencv_flann_Index_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".flann_Index",
    sizeof(pyopencv_flann_Index_t),
};

static void pyopencv_flann_Index_dealloc(PyObject* self)
{
    ((pyopencv_flann_Index_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::flann::Index>& r)
{
    pyopencv_flann_Index_t *m = PyObject_NEW(pyopencv_flann_Index_t, &pyopencv_flann_Index_Type);
    new (&(m->v)) Ptr<cv::flann::Index>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::flann::Index>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_flann_Index_Type))
    {
        failmsg("Expected cv::flann::Index for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_flann_Index_t*)src)->v.dynamicCast<cv::flann::Index>();
    return true;
}


struct pyopencv_softcascade_ChannelFeatureBuilder_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_softcascade_ChannelFeatureBuilder_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".softcascade_ChannelFeatureBuilder",
    sizeof(pyopencv_softcascade_ChannelFeatureBuilder_t),
};

static void pyopencv_softcascade_ChannelFeatureBuilder_dealloc(PyObject* self)
{
    ((pyopencv_softcascade_ChannelFeatureBuilder_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::softcascade::ChannelFeatureBuilder>& r)
{
    pyopencv_softcascade_ChannelFeatureBuilder_t *m = PyObject_NEW(pyopencv_softcascade_ChannelFeatureBuilder_t, &pyopencv_softcascade_ChannelFeatureBuilder_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::softcascade::ChannelFeatureBuilder>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_softcascade_ChannelFeatureBuilder_Type))
    {
        failmsg("Expected cv::softcascade::ChannelFeatureBuilder for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_softcascade_ChannelFeatureBuilder_t*)src)->v.dynamicCast<cv::softcascade::ChannelFeatureBuilder>();
    return true;
}


struct pyopencv_softcascade_Detector_t
{
    PyObject_HEAD
    Ptr<cv::Algorithm> v;
};

static PyTypeObject pyopencv_softcascade_Detector_Type =
{
    PyObject_HEAD_INIT(&PyType_Type)
0,
    MODULESTR".softcascade_Detector",
    sizeof(pyopencv_softcascade_Detector_t),
};

static void pyopencv_softcascade_Detector_dealloc(PyObject* self)
{
    ((pyopencv_softcascade_Detector_t*)self)->v.release();
    PyObject_Del(self);
}

template<> PyObject* pyopencv_from(const Ptr<cv::softcascade::Detector>& r)
{
    pyopencv_softcascade_Detector_t *m = PyObject_NEW(pyopencv_softcascade_Detector_t, &pyopencv_softcascade_Detector_Type);
    new (&(m->v)) Ptr<cv::Algorithm>(); // init Ptr with placement new
    m->v = r;
    return (PyObject*)m;
}

template<> bool pyopencv_to(PyObject* src, Ptr<cv::softcascade::Detector>& dst, const char* name)
{
    if( src == NULL || src == Py_None )
        return true;
    if(!PyObject_TypeCheck(src, &pyopencv_softcascade_Detector_Type))
    {
        failmsg("Expected cv::softcascade::Detector for argument '%s'", name);
        return false;
    }
    dst = ((pyopencv_softcascade_Detector_t*)src)->v.dynamicCast<cv::softcascade::Detector>();
    return true;
}


static PyObject* pyopencv_KDTree_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<KDTree %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_KDTree_get_labels(pyopencv_KDTree_t* p, void *closure)
{
    return pyopencv_from(p->v->labels);
}

static PyObject* pyopencv_KDTree_get_maxDepth(pyopencv_KDTree_t* p, void *closure)
{
    return pyopencv_from(p->v->maxDepth);
}

static PyObject* pyopencv_KDTree_get_normType(pyopencv_KDTree_t* p, void *closure)
{
    return pyopencv_from(p->v->normType);
}

static int pyopencv_KDTree_set_normType(pyopencv_KDTree_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the normType attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->normType) ? 0 : -1;
}

static PyObject* pyopencv_KDTree_get_points(pyopencv_KDTree_t* p, void *closure)
{
    return pyopencv_from(p->v->points);
}


static PyGetSetDef pyopencv_KDTree_getseters[] =
{
    {(char*)"labels", (getter)pyopencv_KDTree_get_labels, NULL, (char*)"labels", NULL},
    {(char*)"maxDepth", (getter)pyopencv_KDTree_get_maxDepth, NULL, (char*)"maxDepth", NULL},
    {(char*)"normType", (getter)pyopencv_KDTree_get_normType, (setter)pyopencv_KDTree_set_normType, (char*)"normType", NULL},
    {(char*)"points", (getter)pyopencv_KDTree_get_points, NULL, (char*)"points", NULL},
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_KDTree_build(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KDTree_Type))
        return failmsgp("Incorrect type of self (must be 'KDTree' or its derivative)");
    cv::KDTree* _self_ = ((pyopencv_KDTree_t*)self)->v.get();
    {
    PyObject* pyobj_points = NULL;
    Mat points;
    bool copyAndReorderPoints=false;

    const char* keywords[] = { "points", "copyAndReorderPoints", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|b:KDTree.build", (char**)keywords, &pyobj_points, &copyAndReorderPoints) &&
        pyopencv_to(pyobj_points, points, ArgInfo("points", 0)) )
    {
        ERRWRAP2(_self_->build(points, copyAndReorderPoints));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_points = NULL;
    Mat points;
    PyObject* pyobj_labels = NULL;
    Mat labels;
    bool copyAndReorderPoints=false;

    const char* keywords[] = { "points", "labels", "copyAndReorderPoints", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|b:KDTree.build", (char**)keywords, &pyobj_points, &pyobj_labels, &copyAndReorderPoints) &&
        pyopencv_to(pyobj_points, points, ArgInfo("points", 0)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 0)) )
    {
        ERRWRAP2(_self_->build(points, labels, copyAndReorderPoints));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_KDTree_dims(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KDTree_Type))
        return failmsgp("Incorrect type of self (must be 'KDTree' or its derivative)");
    cv::KDTree* _self_ = ((pyopencv_KDTree_t*)self)->v.get();
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->dims());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_KDTree_findNearest(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KDTree_Type))
        return failmsgp("Incorrect type of self (must be 'KDTree' or its derivative)");
    cv::KDTree* _self_ = ((pyopencv_KDTree_t*)self)->v.get();
    PyObject* pyobj_vec = NULL;
    Mat vec;
    int K=0;
    int Emax=0;
    PyObject* pyobj_neighborsIdx = NULL;
    Mat neighborsIdx;
    PyObject* pyobj_neighbors = NULL;
    Mat neighbors;
    PyObject* pyobj_dist = NULL;
    Mat dist;
    PyObject* pyobj_labels = NULL;
    Mat labels;
    int retval;

    const char* keywords[] = { "vec", "K", "Emax", "neighborsIdx", "neighbors", "dist", "labels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oii|OOOO:KDTree.findNearest", (char**)keywords, &pyobj_vec, &K, &Emax, &pyobj_neighborsIdx, &pyobj_neighbors, &pyobj_dist, &pyobj_labels) &&
        pyopencv_to(pyobj_vec, vec, ArgInfo("vec", 0)) &&
        pyopencv_to(pyobj_neighborsIdx, neighborsIdx, ArgInfo("neighborsIdx", 1)) &&
        pyopencv_to(pyobj_neighbors, neighbors, ArgInfo("neighbors", 1)) &&
        pyopencv_to(pyobj_dist, dist, ArgInfo("dist", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) )
    {
        ERRWRAP2(retval = _self_->findNearest(vec, K, Emax, neighborsIdx, neighbors, dist, labels));
        return Py_BuildValue("(NNNNN)", pyopencv_from(retval), pyopencv_from(neighborsIdx), pyopencv_from(neighbors), pyopencv_from(dist), pyopencv_from(labels));
    }

    return NULL;
}

static PyObject* pyopencv_KDTree_findOrthoRange(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KDTree_Type))
        return failmsgp("Incorrect type of self (must be 'KDTree' or its derivative)");
    cv::KDTree* _self_ = ((pyopencv_KDTree_t*)self)->v.get();
    PyObject* pyobj_minBounds = NULL;
    Mat minBounds;
    PyObject* pyobj_maxBounds = NULL;
    Mat maxBounds;
    PyObject* pyobj_neighborsIdx = NULL;
    Mat neighborsIdx;
    PyObject* pyobj_neighbors = NULL;
    Mat neighbors;
    PyObject* pyobj_labels = NULL;
    Mat labels;

    const char* keywords[] = { "minBounds", "maxBounds", "neighborsIdx", "neighbors", "labels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOO:KDTree.findOrthoRange", (char**)keywords, &pyobj_minBounds, &pyobj_maxBounds, &pyobj_neighborsIdx, &pyobj_neighbors, &pyobj_labels) &&
        pyopencv_to(pyobj_minBounds, minBounds, ArgInfo("minBounds", 0)) &&
        pyopencv_to(pyobj_maxBounds, maxBounds, ArgInfo("maxBounds", 0)) &&
        pyopencv_to(pyobj_neighborsIdx, neighborsIdx, ArgInfo("neighborsIdx", 1)) &&
        pyopencv_to(pyobj_neighbors, neighbors, ArgInfo("neighbors", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) )
    {
        ERRWRAP2(_self_->findOrthoRange(minBounds, maxBounds, neighborsIdx, neighbors, labels));
        return Py_BuildValue("(NNN)", pyopencv_from(neighborsIdx), pyopencv_from(neighbors), pyopencv_from(labels));
    }

    return NULL;
}

static PyObject* pyopencv_KDTree_getPoints(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KDTree_Type))
        return failmsgp("Incorrect type of self (must be 'KDTree' or its derivative)");
    cv::KDTree* _self_ = ((pyopencv_KDTree_t*)self)->v.get();
    PyObject* pyobj_idx = NULL;
    Mat idx;
    PyObject* pyobj_pts = NULL;
    Mat pts;
    PyObject* pyobj_labels = NULL;
    Mat labels;

    const char* keywords[] = { "idx", "pts", "labels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OO:KDTree.getPoints", (char**)keywords, &pyobj_idx, &pyobj_pts, &pyobj_labels) &&
        pyopencv_to(pyobj_idx, idx, ArgInfo("idx", 0)) &&
        pyopencv_to(pyobj_pts, pts, ArgInfo("pts", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) )
    {
        ERRWRAP2(_self_->getPoints(idx, pts, labels));
        return Py_BuildValue("(NN)", pyopencv_from(pts), pyopencv_from(labels));
    }

    return NULL;
}



static PyMethodDef pyopencv_KDTree_methods[] =
{
    {"build", (PyCFunction)pyopencv_KDTree_build, METH_VARARGS | METH_KEYWORDS, "build(points[, copyAndReorderPoints]) -> None  or  build(points, labels[, copyAndReorderPoints]) -> None"},
    {"dims", (PyCFunction)pyopencv_KDTree_dims, METH_VARARGS | METH_KEYWORDS, "dims() -> retval"},
    {"findNearest", (PyCFunction)pyopencv_KDTree_findNearest, METH_VARARGS | METH_KEYWORDS, "findNearest(vec, K, Emax[, neighborsIdx[, neighbors[, dist[, labels]]]]) -> retval, neighborsIdx, neighbors, dist, labels"},
    {"findOrthoRange", (PyCFunction)pyopencv_KDTree_findOrthoRange, METH_VARARGS | METH_KEYWORDS, "findOrthoRange(minBounds, maxBounds[, neighborsIdx[, neighbors[, labels]]]) -> neighborsIdx, neighbors, labels"},
    {"getPoints", (PyCFunction)pyopencv_KDTree_getPoints, METH_VARARGS | METH_KEYWORDS, "getPoints(idx[, pts[, labels]]) -> pts, labels"},

    {NULL,          NULL}
};

static void pyopencv_KDTree_specials(void)
{
    pyopencv_KDTree_Type.tp_base = NULL;
    pyopencv_KDTree_Type.tp_dealloc = pyopencv_KDTree_dealloc;
    pyopencv_KDTree_Type.tp_repr = pyopencv_KDTree_repr;
    pyopencv_KDTree_Type.tp_getset = pyopencv_KDTree_getseters;
    pyopencv_KDTree_Type.tp_methods = pyopencv_KDTree_methods;
}

static PyObject* pyopencv_Algorithm_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<Algorithm %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_Algorithm_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_Algorithm_getAlgorithm(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    Ptr_Algorithm retval;

    const char* keywords[] = { "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Algorithm.getAlgorithm", (char**)keywords, &pyobj_name) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(retval = _self_->getAlgorithm(name));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_getBool(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    bool retval;

    const char* keywords[] = { "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Algorithm.getBool", (char**)keywords, &pyobj_name) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(retval = _self_->getBool(name));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_getDouble(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    double retval;

    const char* keywords[] = { "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Algorithm.getDouble", (char**)keywords, &pyobj_name) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(retval = _self_->getDouble(name));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_getInt(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    int retval;

    const char* keywords[] = { "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Algorithm.getInt", (char**)keywords, &pyobj_name) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(retval = _self_->getInt(name));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_getMat(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    Mat retval;

    const char* keywords[] = { "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Algorithm.getMat", (char**)keywords, &pyobj_name) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(retval = _self_->getMat(name));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_getMatVector(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    vector_Mat retval;

    const char* keywords[] = { "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Algorithm.getMatVector", (char**)keywords, &pyobj_name) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(retval = _self_->getMatVector(name));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_getParams(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    vector_String names;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getParams(names));
        return pyopencv_from(names);
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_getString(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    String retval;

    const char* keywords[] = { "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Algorithm.getString", (char**)keywords, &pyobj_name) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(retval = _self_->getString(name));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_paramHelp(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    String retval;

    const char* keywords[] = { "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Algorithm.paramHelp", (char**)keywords, &pyobj_name) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(retval = _self_->paramHelp(name));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_paramType(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    int retval;

    const char* keywords[] = { "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Algorithm.paramType", (char**)keywords, &pyobj_name) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(retval = _self_->paramType(name));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_setAlgorithm(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_value = NULL;
    Ptr_Algorithm value;

    const char* keywords[] = { "name", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:Algorithm.setAlgorithm", (char**)keywords, &pyobj_name, &pyobj_value) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to(pyobj_value, value, ArgInfo("value", 0)) )
    {
        ERRWRAP2(_self_->setAlgorithm(name, value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_setBool(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    bool value=0;

    const char* keywords[] = { "name", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Ob:Algorithm.setBool", (char**)keywords, &pyobj_name, &value) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(_self_->setBool(name, value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_setDouble(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    double value=0;

    const char* keywords[] = { "name", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Od:Algorithm.setDouble", (char**)keywords, &pyobj_name, &value) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(_self_->setDouble(name, value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_setInt(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    int value=0;

    const char* keywords[] = { "name", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi:Algorithm.setInt", (char**)keywords, &pyobj_name, &value) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(_self_->setInt(name, value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_setMat(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_value = NULL;
    Mat value;

    const char* keywords[] = { "name", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:Algorithm.setMat", (char**)keywords, &pyobj_name, &pyobj_value) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to(pyobj_value, value, ArgInfo("value", 0)) )
    {
        ERRWRAP2(_self_->setMat(name, value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_setMatVector(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_value = NULL;
    vector_Mat value;

    const char* keywords[] = { "name", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:Algorithm.setMatVector", (char**)keywords, &pyobj_name, &pyobj_value) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to(pyobj_value, value, ArgInfo("value", 0)) )
    {
        ERRWRAP2(_self_->setMatVector(name, value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_Algorithm_setString(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Algorithm_Type))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    cv::Algorithm* _self_ = ((pyopencv_Algorithm_t*)self)->v.get();
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_value = NULL;
    String value;

    const char* keywords[] = { "name", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:Algorithm.setString", (char**)keywords, &pyobj_name, &pyobj_value) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to(pyobj_value, value, ArgInfo("value", 0)) )
    {
        ERRWRAP2(_self_->setString(name, value));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_Algorithm_methods[] =
{
    {"getAlgorithm", (PyCFunction)pyopencv_Algorithm_getAlgorithm, METH_VARARGS | METH_KEYWORDS, "getAlgorithm(name) -> retval"},
    {"getBool", (PyCFunction)pyopencv_Algorithm_getBool, METH_VARARGS | METH_KEYWORDS, "getBool(name) -> retval"},
    {"getDouble", (PyCFunction)pyopencv_Algorithm_getDouble, METH_VARARGS | METH_KEYWORDS, "getDouble(name) -> retval"},
    {"getInt", (PyCFunction)pyopencv_Algorithm_getInt, METH_VARARGS | METH_KEYWORDS, "getInt(name) -> retval"},
    {"getMat", (PyCFunction)pyopencv_Algorithm_getMat, METH_VARARGS | METH_KEYWORDS, "getMat(name) -> retval"},
    {"getMatVector", (PyCFunction)pyopencv_Algorithm_getMatVector, METH_VARARGS | METH_KEYWORDS, "getMatVector(name) -> retval"},
    {"getParams", (PyCFunction)pyopencv_Algorithm_getParams, METH_VARARGS | METH_KEYWORDS, "getParams() -> names"},
    {"getString", (PyCFunction)pyopencv_Algorithm_getString, METH_VARARGS | METH_KEYWORDS, "getString(name) -> retval"},
    {"paramHelp", (PyCFunction)pyopencv_Algorithm_paramHelp, METH_VARARGS | METH_KEYWORDS, "paramHelp(name) -> retval"},
    {"paramType", (PyCFunction)pyopencv_Algorithm_paramType, METH_VARARGS | METH_KEYWORDS, "paramType(name) -> retval"},
    {"setAlgorithm", (PyCFunction)pyopencv_Algorithm_setAlgorithm, METH_VARARGS | METH_KEYWORDS, "setAlgorithm(name, value) -> None"},
    {"setBool", (PyCFunction)pyopencv_Algorithm_setBool, METH_VARARGS | METH_KEYWORDS, "setBool(name, value) -> None"},
    {"setDouble", (PyCFunction)pyopencv_Algorithm_setDouble, METH_VARARGS | METH_KEYWORDS, "setDouble(name, value) -> None"},
    {"setInt", (PyCFunction)pyopencv_Algorithm_setInt, METH_VARARGS | METH_KEYWORDS, "setInt(name, value) -> None"},
    {"setMat", (PyCFunction)pyopencv_Algorithm_setMat, METH_VARARGS | METH_KEYWORDS, "setMat(name, value) -> None"},
    {"setMatVector", (PyCFunction)pyopencv_Algorithm_setMatVector, METH_VARARGS | METH_KEYWORDS, "setMatVector(name, value) -> None"},
    {"setString", (PyCFunction)pyopencv_Algorithm_setString, METH_VARARGS | METH_KEYWORDS, "setString(name, value) -> None"},

    {NULL,          NULL}
};

static void pyopencv_Algorithm_specials(void)
{
    pyopencv_Algorithm_Type.tp_base = NULL;
    pyopencv_Algorithm_Type.tp_dealloc = pyopencv_Algorithm_dealloc;
    pyopencv_Algorithm_Type.tp_repr = pyopencv_Algorithm_repr;
    pyopencv_Algorithm_Type.tp_getset = pyopencv_Algorithm_getseters;
    pyopencv_Algorithm_Type.tp_methods = pyopencv_Algorithm_methods;
}

static PyObject* pyopencv_KeyPoint_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<KeyPoint %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_KeyPoint_get_angle(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.angle);
}

static int pyopencv_KeyPoint_set_angle(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the angle attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.angle) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_class_id(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.class_id);
}

static int pyopencv_KeyPoint_set_class_id(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the class_id attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.class_id) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_octave(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.octave);
}

static int pyopencv_KeyPoint_set_octave(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the octave attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.octave) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_pt(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.pt);
}

static int pyopencv_KeyPoint_set_pt(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the pt attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.pt) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_response(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.response);
}

static int pyopencv_KeyPoint_set_response(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the response attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.response) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_size(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.size);
}

static int pyopencv_KeyPoint_set_size(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the size attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.size) ? 0 : -1;
}


static PyGetSetDef pyopencv_KeyPoint_getseters[] =
{
    {(char*)"angle", (getter)pyopencv_KeyPoint_get_angle, (setter)pyopencv_KeyPoint_set_angle, (char*)"angle", NULL},
    {(char*)"class_id", (getter)pyopencv_KeyPoint_get_class_id, (setter)pyopencv_KeyPoint_set_class_id, (char*)"class_id", NULL},
    {(char*)"octave", (getter)pyopencv_KeyPoint_get_octave, (setter)pyopencv_KeyPoint_set_octave, (char*)"octave", NULL},
    {(char*)"pt", (getter)pyopencv_KeyPoint_get_pt, (setter)pyopencv_KeyPoint_set_pt, (char*)"pt", NULL},
    {(char*)"response", (getter)pyopencv_KeyPoint_get_response, (setter)pyopencv_KeyPoint_set_response, (char*)"response", NULL},
    {(char*)"size", (getter)pyopencv_KeyPoint_get_size, (setter)pyopencv_KeyPoint_set_size, (char*)"size", NULL},
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_KeyPoint_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_KeyPoint_specials(void)
{
    pyopencv_KeyPoint_Type.tp_base = NULL;
    pyopencv_KeyPoint_Type.tp_dealloc = pyopencv_KeyPoint_dealloc;
    pyopencv_KeyPoint_Type.tp_repr = pyopencv_KeyPoint_repr;
    pyopencv_KeyPoint_Type.tp_getset = pyopencv_KeyPoint_getseters;
    pyopencv_KeyPoint_Type.tp_methods = pyopencv_KeyPoint_methods;
}

static PyObject* pyopencv_DMatch_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<DMatch %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_DMatch_get_distance(pyopencv_DMatch_t* p, void *closure)
{
    return pyopencv_from(p->v.distance);
}

static int pyopencv_DMatch_set_distance(pyopencv_DMatch_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the distance attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.distance) ? 0 : -1;
}

static PyObject* pyopencv_DMatch_get_imgIdx(pyopencv_DMatch_t* p, void *closure)
{
    return pyopencv_from(p->v.imgIdx);
}

static int pyopencv_DMatch_set_imgIdx(pyopencv_DMatch_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the imgIdx attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.imgIdx) ? 0 : -1;
}

static PyObject* pyopencv_DMatch_get_queryIdx(pyopencv_DMatch_t* p, void *closure)
{
    return pyopencv_from(p->v.queryIdx);
}

static int pyopencv_DMatch_set_queryIdx(pyopencv_DMatch_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the queryIdx attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.queryIdx) ? 0 : -1;
}

static PyObject* pyopencv_DMatch_get_trainIdx(pyopencv_DMatch_t* p, void *closure)
{
    return pyopencv_from(p->v.trainIdx);
}

static int pyopencv_DMatch_set_trainIdx(pyopencv_DMatch_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the trainIdx attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.trainIdx) ? 0 : -1;
}


static PyGetSetDef pyopencv_DMatch_getseters[] =
{
    {(char*)"distance", (getter)pyopencv_DMatch_get_distance, (setter)pyopencv_DMatch_set_distance, (char*)"distance", NULL},
    {(char*)"imgIdx", (getter)pyopencv_DMatch_get_imgIdx, (setter)pyopencv_DMatch_set_imgIdx, (char*)"imgIdx", NULL},
    {(char*)"queryIdx", (getter)pyopencv_DMatch_get_queryIdx, (setter)pyopencv_DMatch_set_queryIdx, (char*)"queryIdx", NULL},
    {(char*)"trainIdx", (getter)pyopencv_DMatch_get_trainIdx, (setter)pyopencv_DMatch_set_trainIdx, (char*)"trainIdx", NULL},
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_DMatch_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_DMatch_specials(void)
{
    pyopencv_DMatch_Type.tp_base = NULL;
    pyopencv_DMatch_Type.tp_dealloc = pyopencv_DMatch_dealloc;
    pyopencv_DMatch_Type.tp_repr = pyopencv_DMatch_repr;
    pyopencv_DMatch_Type.tp_getset = pyopencv_DMatch_getseters;
    pyopencv_DMatch_Type.tp_methods = pyopencv_DMatch_methods;
}
static bool pyopencv_to(PyObject* src, cv::Moments& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"m00") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m00");
        ok = tmp && pyopencv_to(tmp, dst.m00);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m10") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m10");
        ok = tmp && pyopencv_to(tmp, dst.m10);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m01") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m01");
        ok = tmp && pyopencv_to(tmp, dst.m01);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m20") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m20");
        ok = tmp && pyopencv_to(tmp, dst.m20);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m11") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m11");
        ok = tmp && pyopencv_to(tmp, dst.m11);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m02") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m02");
        ok = tmp && pyopencv_to(tmp, dst.m02);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m30") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m30");
        ok = tmp && pyopencv_to(tmp, dst.m30);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m21") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m21");
        ok = tmp && pyopencv_to(tmp, dst.m21);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m12") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m12");
        ok = tmp && pyopencv_to(tmp, dst.m12);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m03") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m03");
        ok = tmp && pyopencv_to(tmp, dst.m03);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu20") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu20");
        ok = tmp && pyopencv_to(tmp, dst.mu20);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu11") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu11");
        ok = tmp && pyopencv_to(tmp, dst.mu11);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu02") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu02");
        ok = tmp && pyopencv_to(tmp, dst.mu02);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu30") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu30");
        ok = tmp && pyopencv_to(tmp, dst.mu30);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu21") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu21");
        ok = tmp && pyopencv_to(tmp, dst.mu21);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu12") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu12");
        ok = tmp && pyopencv_to(tmp, dst.mu12);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu03") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu03");
        ok = tmp && pyopencv_to(tmp, dst.mu03);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu20") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu20");
        ok = tmp && pyopencv_to(tmp, dst.nu20);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu11") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu11");
        ok = tmp && pyopencv_to(tmp, dst.nu11);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu02") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu02");
        ok = tmp && pyopencv_to(tmp, dst.nu02);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu30") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu30");
        ok = tmp && pyopencv_to(tmp, dst.nu30);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu21") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu21");
        ok = tmp && pyopencv_to(tmp, dst.nu21);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu12") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu12");
        ok = tmp && pyopencv_to(tmp, dst.nu12);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu03") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu03");
        ok = tmp && pyopencv_to(tmp, dst.nu03);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

static PyObject* pyopencv_FileStorage_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FileStorage %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FileStorage_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_FileStorage_getFirstTopLevelNode(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    FileNode retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFirstTopLevelNode());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileStorage_isOpened(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileStorage_open(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    PyObject* pyobj_filename = NULL;
    String filename;
    int flags=0;
    PyObject* pyobj_encoding = NULL;
    String encoding;
    bool retval;

    const char* keywords[] = { "filename", "flags", "encoding", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|O:FileStorage.open", (char**)keywords, &pyobj_filename, &flags, &pyobj_encoding) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_encoding, encoding, ArgInfo("encoding", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, flags, encoding));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileStorage_getelem(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    char* nodename=(char*)"";
    FileNode retval;

    const char* keywords[] = { "nodename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "s:FileStorage.operator[]", (char**)keywords, &nodename) )
    {
        ERRWRAP2(retval = _self_->operator[](nodename));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileStorage_release(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v.get();

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_FileStorage_releaseAndGetString(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    String retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->releaseAndGetString());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileStorage_root(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileStorage_Type))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    cv::FileStorage* _self_ = ((pyopencv_FileStorage_t*)self)->v.get();
    int streamidx=0;
    FileNode retval;

    const char* keywords[] = { "streamidx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|i:FileStorage.root", (char**)keywords, &streamidx) )
    {
        ERRWRAP2(retval = _self_->root(streamidx));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_FileStorage_methods[] =
{
    {"getFirstTopLevelNode", (PyCFunction)pyopencv_FileStorage_getFirstTopLevelNode, METH_VARARGS | METH_KEYWORDS, "getFirstTopLevelNode() -> retval"},
    {"isOpened", (PyCFunction)pyopencv_FileStorage_isOpened, METH_VARARGS | METH_KEYWORDS, "isOpened() -> retval"},
    {"open", (PyCFunction)pyopencv_FileStorage_open, METH_VARARGS | METH_KEYWORDS, "open(filename, flags[, encoding]) -> retval"},
    {"operator[]", (PyCFunction)pyopencv_FileStorage_getelem, METH_VARARGS | METH_KEYWORDS, "operator[](nodename) -> retval"},
    {"release", (PyCFunction)pyopencv_FileStorage_release, METH_VARARGS | METH_KEYWORDS, "release() -> None"},
    {"releaseAndGetString", (PyCFunction)pyopencv_FileStorage_releaseAndGetString, METH_VARARGS | METH_KEYWORDS, "releaseAndGetString() -> retval"},
    {"root", (PyCFunction)pyopencv_FileStorage_root, METH_VARARGS | METH_KEYWORDS, "root([, streamidx]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_FileStorage_specials(void)
{
    pyopencv_FileStorage_Type.tp_base = NULL;
    pyopencv_FileStorage_Type.tp_dealloc = pyopencv_FileStorage_dealloc;
    pyopencv_FileStorage_Type.tp_repr = pyopencv_FileStorage_repr;
    pyopencv_FileStorage_Type.tp_getset = pyopencv_FileStorage_getseters;
    pyopencv_FileStorage_Type.tp_methods = pyopencv_FileStorage_methods;
}

static PyObject* pyopencv_FileNode_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FileNode %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FileNode_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_FileNode_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isInt(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isInt());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isMap(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isMap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isNamed(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isNamed());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isNone(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isNone());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isReal(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isReal());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isSeq(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isSeq());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_isString(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isString());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_name(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    String retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->name());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_getelem(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    {
    char* nodename=(char*)"";
    FileNode retval;

    const char* keywords[] = { "nodename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "s:FileNode.operator[]", (char**)keywords, &nodename) )
    {
        ERRWRAP2(retval = _self_->operator[](nodename));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    int i=0;
    FileNode retval;

    const char* keywords[] = { "i", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FileNode.operator[]", (char**)keywords, &i) )
    {
        ERRWRAP2(retval = _self_->operator[](i));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_size(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    size_t retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->size());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_FileNode_type(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FileNode_Type))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = &((pyopencv_FileNode_t*)self)->v;
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->type());
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_FileNode_methods[] =
{
    {"empty", (PyCFunction)pyopencv_FileNode_empty, METH_VARARGS | METH_KEYWORDS, "empty() -> retval"},
    {"isInt", (PyCFunction)pyopencv_FileNode_isInt, METH_VARARGS | METH_KEYWORDS, "isInt() -> retval"},
    {"isMap", (PyCFunction)pyopencv_FileNode_isMap, METH_VARARGS | METH_KEYWORDS, "isMap() -> retval"},
    {"isNamed", (PyCFunction)pyopencv_FileNode_isNamed, METH_VARARGS | METH_KEYWORDS, "isNamed() -> retval"},
    {"isNone", (PyCFunction)pyopencv_FileNode_isNone, METH_VARARGS | METH_KEYWORDS, "isNone() -> retval"},
    {"isReal", (PyCFunction)pyopencv_FileNode_isReal, METH_VARARGS | METH_KEYWORDS, "isReal() -> retval"},
    {"isSeq", (PyCFunction)pyopencv_FileNode_isSeq, METH_VARARGS | METH_KEYWORDS, "isSeq() -> retval"},
    {"isString", (PyCFunction)pyopencv_FileNode_isString, METH_VARARGS | METH_KEYWORDS, "isString() -> retval"},
    {"name", (PyCFunction)pyopencv_FileNode_name, METH_VARARGS | METH_KEYWORDS, "name() -> retval"},
    {"operator[]", (PyCFunction)pyopencv_FileNode_getelem, METH_VARARGS | METH_KEYWORDS, "operator[](nodename) -> retval  or  operator[](i) -> retval"},
    {"size", (PyCFunction)pyopencv_FileNode_size, METH_VARARGS | METH_KEYWORDS, "size() -> retval"},
    {"type", (PyCFunction)pyopencv_FileNode_type, METH_VARARGS | METH_KEYWORDS, "type() -> retval"},

    {NULL,          NULL}
};

static void pyopencv_FileNode_specials(void)
{
    pyopencv_FileNode_Type.tp_base = NULL;
    pyopencv_FileNode_Type.tp_dealloc = pyopencv_FileNode_dealloc;
    pyopencv_FileNode_Type.tp_repr = pyopencv_FileNode_repr;
    pyopencv_FileNode_Type.tp_getset = pyopencv_FileNode_getseters;
    pyopencv_FileNode_Type.tp_methods = pyopencv_FileNode_methods;
}

static PyObject* pyopencv_flann_Index_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<flann_Index %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_flann_Index_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_flann_Index_build(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    PyObject* pyobj_features = NULL;
    Mat features;
    PyObject* pyobj_params = NULL;
    IndexParams params;
    PyObject* pyobj_distType = NULL;
    cvflann_flann_distance_t distType=cvflann::FLANN_DIST_L2;

    const char* keywords[] = { "features", "params", "distType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:flann_Index.build", (char**)keywords, &pyobj_features, &pyobj_params, &pyobj_distType) &&
        pyopencv_to(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) &&
        pyopencv_to(pyobj_distType, distType, ArgInfo("distType", 0)) )
    {
        ERRWRAP2(_self_->build(features, params, distType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_getAlgorithm(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    cvflann_flann_algorithm_t retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAlgorithm());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_getDistance(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    cvflann_flann_distance_t retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDistance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_knnSearch(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    PyObject* pyobj_query = NULL;
    Mat query;
    PyObject* pyobj_indices = NULL;
    Mat indices;
    PyObject* pyobj_dists = NULL;
    Mat dists;
    int knn=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;

    const char* keywords[] = { "query", "knn", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|OOO:flann_Index.knnSearch", (char**)keywords, &pyobj_query, &knn, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(_self_->knnSearch(query, indices, dists, knn, params));
        return Py_BuildValue("(NN)", pyopencv_from(indices), pyopencv_from(dists));
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_load(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    PyObject* pyobj_features = NULL;
    Mat features;
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "features", "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:flann_Index.load", (char**)keywords, &pyobj_features, &pyobj_filename) &&
        pyopencv_to(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->load(features, filename));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_radiusSearch(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    PyObject* pyobj_query = NULL;
    Mat query;
    PyObject* pyobj_indices = NULL;
    Mat indices;
    PyObject* pyobj_dists = NULL;
    Mat dists;
    double radius=0;
    int maxResults=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;
    int retval;

    const char* keywords[] = { "query", "radius", "maxResults", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Odi|OOO:flann_Index.radiusSearch", (char**)keywords, &pyobj_query, &radius, &maxResults, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->radiusSearch(query, indices, dists, radius, maxResults, params));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(indices), pyopencv_from(dists));
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_release(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v.get();

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_flann_Index_save(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_flann_Index_Type))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    cv::flann::Index* _self_ = ((pyopencv_flann_Index_t*)self)->v.get();
    PyObject* pyobj_filename = NULL;
    String filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:flann_Index.save", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(_self_->save(filename));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_flann_Index_methods[] =
{
    {"build", (PyCFunction)pyopencv_flann_Index_build, METH_VARARGS | METH_KEYWORDS, "build(features, params[, distType]) -> None"},
    {"getAlgorithm", (PyCFunction)pyopencv_flann_Index_getAlgorithm, METH_VARARGS | METH_KEYWORDS, "getAlgorithm() -> retval"},
    {"getDistance", (PyCFunction)pyopencv_flann_Index_getDistance, METH_VARARGS | METH_KEYWORDS, "getDistance() -> retval"},
    {"knnSearch", (PyCFunction)pyopencv_flann_Index_knnSearch, METH_VARARGS | METH_KEYWORDS, "knnSearch(query, knn[, indices[, dists[, params]]]) -> indices, dists"},
    {"load", (PyCFunction)pyopencv_flann_Index_load, METH_VARARGS | METH_KEYWORDS, "load(features, filename) -> retval"},
    {"radiusSearch", (PyCFunction)pyopencv_flann_Index_radiusSearch, METH_VARARGS | METH_KEYWORDS, "radiusSearch(query, radius, maxResults[, indices[, dists[, params]]]) -> retval, indices, dists"},
    {"release", (PyCFunction)pyopencv_flann_Index_release, METH_VARARGS | METH_KEYWORDS, "release() -> None"},
    {"save", (PyCFunction)pyopencv_flann_Index_save, METH_VARARGS | METH_KEYWORDS, "save(filename) -> None"},

    {NULL,          NULL}
};

static void pyopencv_flann_Index_specials(void)
{
    pyopencv_flann_Index_Type.tp_base = NULL;
    pyopencv_flann_Index_Type.tp_dealloc = pyopencv_flann_Index_dealloc;
    pyopencv_flann_Index_Type.tp_repr = pyopencv_flann_Index_repr;
    pyopencv_flann_Index_Type.tp_getset = pyopencv_flann_Index_getseters;
    pyopencv_flann_Index_Type.tp_methods = pyopencv_flann_Index_methods;
}

static PyObject* pyopencv_CLAHE_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<CLAHE %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CLAHE_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CLAHE_apply(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CLAHE_Type))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    cv::CLAHE* _self_ = dynamic_cast<cv::CLAHE*>(((pyopencv_CLAHE_t*)self)->v.get());
    PyObject* pyobj_src = NULL;
    Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:CLAHE.apply", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->apply(src, dst));
        return pyopencv_from(dst);
    }

    return NULL;
}

static PyObject* pyopencv_CLAHE_setClipLimit(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CLAHE_Type))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    cv::CLAHE* _self_ = dynamic_cast<cv::CLAHE*>(((pyopencv_CLAHE_t*)self)->v.get());
    double clipLimit=0;

    const char* keywords[] = { "clipLimit", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:CLAHE.setClipLimit", (char**)keywords, &clipLimit) )
    {
        ERRWRAP2(_self_->setClipLimit(clipLimit));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CLAHE_setTilesGridSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CLAHE_Type))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    cv::CLAHE* _self_ = dynamic_cast<cv::CLAHE*>(((pyopencv_CLAHE_t*)self)->v.get());
    PyObject* pyobj_tileGridSize = NULL;
    Size tileGridSize;

    const char* keywords[] = { "tileGridSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:CLAHE.setTilesGridSize", (char**)keywords, &pyobj_tileGridSize) &&
        pyopencv_to(pyobj_tileGridSize, tileGridSize, ArgInfo("tileGridSize", 0)) )
    {
        ERRWRAP2(_self_->setTilesGridSize(tileGridSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_CLAHE_methods[] =
{
    {"apply", (PyCFunction)pyopencv_CLAHE_apply, METH_VARARGS | METH_KEYWORDS, "apply(src[, dst]) -> dst"},
    {"setClipLimit", (PyCFunction)pyopencv_CLAHE_setClipLimit, METH_VARARGS | METH_KEYWORDS, "setClipLimit(clipLimit) -> None"},
    {"setTilesGridSize", (PyCFunction)pyopencv_CLAHE_setTilesGridSize, METH_VARARGS | METH_KEYWORDS, "setTilesGridSize(tileGridSize) -> None"},

    {NULL,          NULL}
};

static void pyopencv_CLAHE_specials(void)
{
    pyopencv_CLAHE_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_CLAHE_Type.tp_dealloc = pyopencv_CLAHE_dealloc;
    pyopencv_CLAHE_Type.tp_repr = pyopencv_CLAHE_repr;
    pyopencv_CLAHE_Type.tp_getset = pyopencv_CLAHE_getseters;
    pyopencv_CLAHE_Type.tp_methods = pyopencv_CLAHE_methods;
}

static PyObject* pyopencv_Subdiv2D_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<Subdiv2D %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_Subdiv2D_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_Subdiv2D_edgeDst(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    int edge=0;
    Point2f dstpt;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.edgeDst", (char**)keywords, &edge) )
    {
        ERRWRAP2(retval = _self_->edgeDst(edge, &dstpt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(dstpt));
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_edgeOrg(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    int edge=0;
    Point2f orgpt;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.edgeOrg", (char**)keywords, &edge) )
    {
        ERRWRAP2(retval = _self_->edgeOrg(edge, &orgpt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(orgpt));
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_findNearest(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    Point2f nearestPt;
    int retval;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.findNearest", (char**)keywords, &pyobj_pt) &&
        pyopencv_to(pyobj_pt, pt, ArgInfo("pt", 0)) )
    {
        ERRWRAP2(retval = _self_->findNearest(pt, &nearestPt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(nearestPt));
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_getEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    int edge=0;
    int nextEdgeType=0;
    int retval;

    const char* keywords[] = { "edge", "nextEdgeType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "ii:Subdiv2D.getEdge", (char**)keywords, &edge, &nextEdgeType) )
    {
        ERRWRAP2(retval = _self_->getEdge(edge, nextEdgeType));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_getEdgeList(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    vector_Vec4f edgeList;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getEdgeList(edgeList));
        return pyopencv_from(edgeList);
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_getTriangleList(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    vector_Vec6f triangleList;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getTriangleList(triangleList));
        return pyopencv_from(triangleList);
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_getVertex(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    int vertex=0;
    int firstEdge;
    Point2f retval;

    const char* keywords[] = { "vertex", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.getVertex", (char**)keywords, &vertex) )
    {
        ERRWRAP2(retval = _self_->getVertex(vertex, &firstEdge));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(firstEdge));
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_getVoronoiFacetList(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    PyObject* pyobj_idx = NULL;
    vector_int idx;
    vector_vector_Point2f facetList;
    vector_Point2f facetCenters;

    const char* keywords[] = { "idx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.getVoronoiFacetList", (char**)keywords, &pyobj_idx) &&
        pyopencv_to(pyobj_idx, idx, ArgInfo("idx", 0)) )
    {
        ERRWRAP2(_self_->getVoronoiFacetList(idx, facetList, facetCenters));
        return Py_BuildValue("(NN)", pyopencv_from(facetList), pyopencv_from(facetCenters));
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_initDelaunay(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    PyObject* pyobj_rect = NULL;
    Rect rect;

    const char* keywords[] = { "rect", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.initDelaunay", (char**)keywords, &pyobj_rect) &&
        pyopencv_to(pyobj_rect, rect, ArgInfo("rect", 0)) )
    {
        ERRWRAP2(_self_->initDelaunay(rect));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_insert(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    {
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    int retval;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.insert", (char**)keywords, &pyobj_pt) &&
        pyopencv_to(pyobj_pt, pt, ArgInfo("pt", 0)) )
    {
        ERRWRAP2(retval = _self_->insert(pt));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_ptvec = NULL;
    vector_Point2f ptvec;

    const char* keywords[] = { "ptvec", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.insert", (char**)keywords, &pyobj_ptvec) &&
        pyopencv_to(pyobj_ptvec, ptvec, ArgInfo("ptvec", 0)) )
    {
        ERRWRAP2(_self_->insert(ptvec));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_locate(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    int edge;
    int vertex;
    int retval;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.locate", (char**)keywords, &pyobj_pt) &&
        pyopencv_to(pyobj_pt, pt, ArgInfo("pt", 0)) )
    {
        ERRWRAP2(retval = _self_->locate(pt, edge, vertex));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(edge), pyopencv_from(vertex));
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_nextEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    int edge=0;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.nextEdge", (char**)keywords, &edge) )
    {
        ERRWRAP2(retval = _self_->nextEdge(edge));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_rotateEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    int edge=0;
    int rotate=0;
    int retval;

    const char* keywords[] = { "edge", "rotate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "ii:Subdiv2D.rotateEdge", (char**)keywords, &edge, &rotate) )
    {
        ERRWRAP2(retval = _self_->rotateEdge(edge, rotate));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_Subdiv2D_symEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Subdiv2D_Type))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    cv::Subdiv2D* _self_ = ((pyopencv_Subdiv2D_t*)self)->v.get();
    int edge=0;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.symEdge", (char**)keywords, &edge) )
    {
        ERRWRAP2(retval = _self_->symEdge(edge));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_Subdiv2D_methods[] =
{
    {"edgeDst", (PyCFunction)pyopencv_Subdiv2D_edgeDst, METH_VARARGS | METH_KEYWORDS, "edgeDst(edge) -> retval, dstpt"},
    {"edgeOrg", (PyCFunction)pyopencv_Subdiv2D_edgeOrg, METH_VARARGS | METH_KEYWORDS, "edgeOrg(edge) -> retval, orgpt"},
    {"findNearest", (PyCFunction)pyopencv_Subdiv2D_findNearest, METH_VARARGS | METH_KEYWORDS, "findNearest(pt) -> retval, nearestPt"},
    {"getEdge", (PyCFunction)pyopencv_Subdiv2D_getEdge, METH_VARARGS | METH_KEYWORDS, "getEdge(edge, nextEdgeType) -> retval"},
    {"getEdgeList", (PyCFunction)pyopencv_Subdiv2D_getEdgeList, METH_VARARGS | METH_KEYWORDS, "getEdgeList() -> edgeList"},
    {"getTriangleList", (PyCFunction)pyopencv_Subdiv2D_getTriangleList, METH_VARARGS | METH_KEYWORDS, "getTriangleList() -> triangleList"},
    {"getVertex", (PyCFunction)pyopencv_Subdiv2D_getVertex, METH_VARARGS | METH_KEYWORDS, "getVertex(vertex) -> retval, firstEdge"},
    {"getVoronoiFacetList", (PyCFunction)pyopencv_Subdiv2D_getVoronoiFacetList, METH_VARARGS | METH_KEYWORDS, "getVoronoiFacetList(idx) -> facetList, facetCenters"},
    {"initDelaunay", (PyCFunction)pyopencv_Subdiv2D_initDelaunay, METH_VARARGS | METH_KEYWORDS, "initDelaunay(rect) -> None"},
    {"insert", (PyCFunction)pyopencv_Subdiv2D_insert, METH_VARARGS | METH_KEYWORDS, "insert(pt) -> retval  or  insert(ptvec) -> None"},
    {"locate", (PyCFunction)pyopencv_Subdiv2D_locate, METH_VARARGS | METH_KEYWORDS, "locate(pt) -> retval, edge, vertex"},
    {"nextEdge", (PyCFunction)pyopencv_Subdiv2D_nextEdge, METH_VARARGS | METH_KEYWORDS, "nextEdge(edge) -> retval"},
    {"rotateEdge", (PyCFunction)pyopencv_Subdiv2D_rotateEdge, METH_VARARGS | METH_KEYWORDS, "rotateEdge(edge, rotate) -> retval"},
    {"symEdge", (PyCFunction)pyopencv_Subdiv2D_symEdge, METH_VARARGS | METH_KEYWORDS, "symEdge(edge) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_Subdiv2D_specials(void)
{
    pyopencv_Subdiv2D_Type.tp_base = NULL;
    pyopencv_Subdiv2D_Type.tp_dealloc = pyopencv_Subdiv2D_dealloc;
    pyopencv_Subdiv2D_Type.tp_repr = pyopencv_Subdiv2D_repr;
    pyopencv_Subdiv2D_Type.tp_getset = pyopencv_Subdiv2D_getseters;
    pyopencv_Subdiv2D_Type.tp_methods = pyopencv_Subdiv2D_methods;
}

static PyObject* pyopencv_LineSegmentDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<LineSegmentDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_LineSegmentDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_LineSegmentDetector_compareSegments(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_LineSegmentDetector_Type))
        return failmsgp("Incorrect type of self (must be 'LineSegmentDetector' or its derivative)");
    cv::LineSegmentDetector* _self_ = dynamic_cast<cv::LineSegmentDetector*>(((pyopencv_LineSegmentDetector_t*)self)->v.get());
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_lines1 = NULL;
    Mat lines1;
    PyObject* pyobj_lines2 = NULL;
    Mat lines2;
    PyObject* pyobj__image = NULL;
    Mat _image;
    int retval;

    const char* keywords[] = { "size", "lines1", "lines2", "_image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:LineSegmentDetector.compareSegments", (char**)keywords, &pyobj_size, &pyobj_lines1, &pyobj_lines2, &pyobj__image) &&
        pyopencv_to(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to(pyobj_lines1, lines1, ArgInfo("lines1", 0)) &&
        pyopencv_to(pyobj_lines2, lines2, ArgInfo("lines2", 0)) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 1)) )
    {
        ERRWRAP2(retval = _self_->compareSegments(size, lines1, lines2, _image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(_image));
    }

    return NULL;
}

static PyObject* pyopencv_LineSegmentDetector_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_LineSegmentDetector_Type))
        return failmsgp("Incorrect type of self (must be 'LineSegmentDetector' or its derivative)");
    cv::LineSegmentDetector* _self_ = dynamic_cast<cv::LineSegmentDetector*>(((pyopencv_LineSegmentDetector_t*)self)->v.get());
    PyObject* pyobj__image = NULL;
    Mat _image;
    PyObject* pyobj__lines = NULL;
    Mat _lines;
    PyObject* pyobj_width = NULL;
    Mat width;
    PyObject* pyobj_prec = NULL;
    Mat prec;
    PyObject* pyobj_nfa = NULL;
    Mat nfa;

    const char* keywords[] = { "_image", "_lines", "width", "prec", "nfa", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOOO:LineSegmentDetector.detect", (char**)keywords, &pyobj__image, &pyobj__lines, &pyobj_width, &pyobj_prec, &pyobj_nfa) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 0)) &&
        pyopencv_to(pyobj__lines, _lines, ArgInfo("_lines", 1)) &&
        pyopencv_to(pyobj_width, width, ArgInfo("width", 1)) &&
        pyopencv_to(pyobj_prec, prec, ArgInfo("prec", 1)) &&
        pyopencv_to(pyobj_nfa, nfa, ArgInfo("nfa", 1)) )
    {
        ERRWRAP2(_self_->detect(_image, _lines, width, prec, nfa));
        return Py_BuildValue("(NNNN)", pyopencv_from(_lines), pyopencv_from(width), pyopencv_from(prec), pyopencv_from(nfa));
    }

    return NULL;
}

static PyObject* pyopencv_LineSegmentDetector_drawSegments(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_LineSegmentDetector_Type))
        return failmsgp("Incorrect type of self (must be 'LineSegmentDetector' or its derivative)");
    cv::LineSegmentDetector* _self_ = dynamic_cast<cv::LineSegmentDetector*>(((pyopencv_LineSegmentDetector_t*)self)->v.get());
    PyObject* pyobj__image = NULL;
    Mat _image;
    PyObject* pyobj_lines = NULL;
    Mat lines;

    const char* keywords[] = { "_image", "lines", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:LineSegmentDetector.drawSegments", (char**)keywords, &pyobj__image, &pyobj_lines) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 1)) &&
        pyopencv_to(pyobj_lines, lines, ArgInfo("lines", 0)) )
    {
        ERRWRAP2(_self_->drawSegments(_image, lines));
        return pyopencv_from(_image);
    }

    return NULL;
}



static PyMethodDef pyopencv_LineSegmentDetector_methods[] =
{
    {"compareSegments", (PyCFunction)pyopencv_LineSegmentDetector_compareSegments, METH_VARARGS | METH_KEYWORDS, "compareSegments(size, lines1, lines2[, _image]) -> retval, _image"},
    {"detect", (PyCFunction)pyopencv_LineSegmentDetector_detect, METH_VARARGS | METH_KEYWORDS, "detect(_image[, _lines[, width[, prec[, nfa]]]]) -> _lines, width, prec, nfa"},
    {"drawSegments", (PyCFunction)pyopencv_LineSegmentDetector_drawSegments, METH_VARARGS | METH_KEYWORDS, "drawSegments(_image, lines) -> _image"},

    {NULL,          NULL}
};

static void pyopencv_LineSegmentDetector_specials(void)
{
    pyopencv_LineSegmentDetector_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_LineSegmentDetector_Type.tp_dealloc = pyopencv_LineSegmentDetector_dealloc;
    pyopencv_LineSegmentDetector_Type.tp_repr = pyopencv_LineSegmentDetector_repr;
    pyopencv_LineSegmentDetector_Type.tp_getset = pyopencv_LineSegmentDetector_getseters;
    pyopencv_LineSegmentDetector_Type.tp_methods = pyopencv_LineSegmentDetector_methods;
}

static PyObject* pyopencv_BackgroundSubtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BackgroundSubtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BackgroundSubtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_BackgroundSubtractor_apply(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractor_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractor' or its derivative)");
    cv::BackgroundSubtractor* _self_ = dynamic_cast<cv::BackgroundSubtractor*>(((pyopencv_BackgroundSubtractor_t*)self)->v.get());
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_fgmask = NULL;
    Mat fgmask;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Od:BackgroundSubtractor.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &learningRate) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }

    return NULL;
}



static PyMethodDef pyopencv_BackgroundSubtractor_methods[] =
{
    {"apply", (PyCFunction)pyopencv_BackgroundSubtractor_apply, METH_VARARGS | METH_KEYWORDS, "apply(image[, fgmask[, learningRate]]) -> fgmask"},

    {NULL,          NULL}
};

static void pyopencv_BackgroundSubtractor_specials(void)
{
    pyopencv_BackgroundSubtractor_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_BackgroundSubtractor_Type.tp_dealloc = pyopencv_BackgroundSubtractor_dealloc;
    pyopencv_BackgroundSubtractor_Type.tp_repr = pyopencv_BackgroundSubtractor_repr;
    pyopencv_BackgroundSubtractor_Type.tp_getset = pyopencv_BackgroundSubtractor_getseters;
    pyopencv_BackgroundSubtractor_Type.tp_methods = pyopencv_BackgroundSubtractor_methods;
}

static PyObject* pyopencv_BackgroundSubtractorMOG_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BackgroundSubtractorMOG %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BackgroundSubtractorMOG_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_BackgroundSubtractorMOG_setBackgroundRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG' or its derivative)");
    cv::BackgroundSubtractorMOG* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG*>(((pyopencv_BackgroundSubtractorMOG_t*)self)->v.get());
    double backgroundRatio=0;

    const char* keywords[] = { "backgroundRatio", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG.setBackgroundRatio", (char**)keywords, &backgroundRatio) )
    {
        ERRWRAP2(_self_->setBackgroundRatio(backgroundRatio));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG_setHistory(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG' or its derivative)");
    cv::BackgroundSubtractorMOG* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG*>(((pyopencv_BackgroundSubtractorMOG_t*)self)->v.get());
    int nframes=0;

    const char* keywords[] = { "nframes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorMOG.setHistory", (char**)keywords, &nframes) )
    {
        ERRWRAP2(_self_->setHistory(nframes));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG_setNMixtures(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG' or its derivative)");
    cv::BackgroundSubtractorMOG* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG*>(((pyopencv_BackgroundSubtractorMOG_t*)self)->v.get());
    int nmix=0;

    const char* keywords[] = { "nmix", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorMOG.setNMixtures", (char**)keywords, &nmix) )
    {
        ERRWRAP2(_self_->setNMixtures(nmix));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG_setNoiseSigma(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG' or its derivative)");
    cv::BackgroundSubtractorMOG* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG*>(((pyopencv_BackgroundSubtractorMOG_t*)self)->v.get());
    double noiseSigma=0;

    const char* keywords[] = { "noiseSigma", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG.setNoiseSigma", (char**)keywords, &noiseSigma) )
    {
        ERRWRAP2(_self_->setNoiseSigma(noiseSigma));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_BackgroundSubtractorMOG_methods[] =
{
    {"setBackgroundRatio", (PyCFunction)pyopencv_BackgroundSubtractorMOG_setBackgroundRatio, METH_VARARGS | METH_KEYWORDS, "setBackgroundRatio(backgroundRatio) -> None"},
    {"setHistory", (PyCFunction)pyopencv_BackgroundSubtractorMOG_setHistory, METH_VARARGS | METH_KEYWORDS, "setHistory(nframes) -> None"},
    {"setNMixtures", (PyCFunction)pyopencv_BackgroundSubtractorMOG_setNMixtures, METH_VARARGS | METH_KEYWORDS, "setNMixtures(nmix) -> None"},
    {"setNoiseSigma", (PyCFunction)pyopencv_BackgroundSubtractorMOG_setNoiseSigma, METH_VARARGS | METH_KEYWORDS, "setNoiseSigma(noiseSigma) -> None"},

    {NULL,          NULL}
};

static void pyopencv_BackgroundSubtractorMOG_specials(void)
{
    pyopencv_BackgroundSubtractorMOG_Type.tp_base = &pyopencv_BackgroundSubtractor_Type;
    pyopencv_BackgroundSubtractorMOG_Type.tp_dealloc = pyopencv_BackgroundSubtractorMOG_dealloc;
    pyopencv_BackgroundSubtractorMOG_Type.tp_repr = pyopencv_BackgroundSubtractorMOG_repr;
    pyopencv_BackgroundSubtractorMOG_Type.tp_getset = pyopencv_BackgroundSubtractorMOG_getseters;
    pyopencv_BackgroundSubtractorMOG_Type.tp_methods = pyopencv_BackgroundSubtractorMOG_methods;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BackgroundSubtractorMOG2 %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BackgroundSubtractorMOG2_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_BackgroundSubtractorMOG2_setBackgroundRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    cv::BackgroundSubtractorMOG2* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    double ratio=0;

    const char* keywords[] = { "ratio", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setBackgroundRatio", (char**)keywords, &ratio) )
    {
        ERRWRAP2(_self_->setBackgroundRatio(ratio));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_setComplexityReductionThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    cv::BackgroundSubtractorMOG2* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    double ct=0;

    const char* keywords[] = { "ct", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setComplexityReductionThreshold", (char**)keywords, &ct) )
    {
        ERRWRAP2(_self_->setComplexityReductionThreshold(ct));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_setDetectShadows(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    cv::BackgroundSubtractorMOG2* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    bool detectShadows=0;

    const char* keywords[] = { "detectShadows", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:BackgroundSubtractorMOG2.setDetectShadows", (char**)keywords, &detectShadows) )
    {
        ERRWRAP2(_self_->setDetectShadows(detectShadows));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_setHistory(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    cv::BackgroundSubtractorMOG2* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    int history=0;

    const char* keywords[] = { "history", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorMOG2.setHistory", (char**)keywords, &history) )
    {
        ERRWRAP2(_self_->setHistory(history));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_setNMixtures(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    cv::BackgroundSubtractorMOG2* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    int nmixtures=0;

    const char* keywords[] = { "nmixtures", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorMOG2.setNMixtures", (char**)keywords, &nmixtures) )
    {
        ERRWRAP2(_self_->setNMixtures(nmixtures));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_setShadowThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    cv::BackgroundSubtractorMOG2* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setShadowThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setShadowThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_setShadowValue(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    cv::BackgroundSubtractorMOG2* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    int value=0;

    const char* keywords[] = { "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorMOG2.setShadowValue", (char**)keywords, &value) )
    {
        ERRWRAP2(_self_->setShadowValue(value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_setVarInit(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    cv::BackgroundSubtractorMOG2* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    double varInit=0;

    const char* keywords[] = { "varInit", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarInit", (char**)keywords, &varInit) )
    {
        ERRWRAP2(_self_->setVarInit(varInit));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_setVarMax(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    cv::BackgroundSubtractorMOG2* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    double varMax=0;

    const char* keywords[] = { "varMax", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarMax", (char**)keywords, &varMax) )
    {
        ERRWRAP2(_self_->setVarMax(varMax));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_setVarMin(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    cv::BackgroundSubtractorMOG2* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    double varMin=0;

    const char* keywords[] = { "varMin", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarMin", (char**)keywords, &varMin) )
    {
        ERRWRAP2(_self_->setVarMin(varMin));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_setVarThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    cv::BackgroundSubtractorMOG2* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    double varThreshold=0;

    const char* keywords[] = { "varThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarThreshold", (char**)keywords, &varThreshold) )
    {
        ERRWRAP2(_self_->setVarThreshold(varThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorMOG2_setVarThresholdGen(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorMOG2_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    cv::BackgroundSubtractorMOG2* _self_ = dynamic_cast<cv::BackgroundSubtractorMOG2*>(((pyopencv_BackgroundSubtractorMOG2_t*)self)->v.get());
    double varThresholdGen=0;

    const char* keywords[] = { "varThresholdGen", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarThresholdGen", (char**)keywords, &varThresholdGen) )
    {
        ERRWRAP2(_self_->setVarThresholdGen(varThresholdGen));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_BackgroundSubtractorMOG2_methods[] =
{
    {"setBackgroundRatio", (PyCFunction)pyopencv_BackgroundSubtractorMOG2_setBackgroundRatio, METH_VARARGS | METH_KEYWORDS, "setBackgroundRatio(ratio) -> None"},
    {"setComplexityReductionThreshold", (PyCFunction)pyopencv_BackgroundSubtractorMOG2_setComplexityReductionThreshold, METH_VARARGS | METH_KEYWORDS, "setComplexityReductionThreshold(ct) -> None"},
    {"setDetectShadows", (PyCFunction)pyopencv_BackgroundSubtractorMOG2_setDetectShadows, METH_VARARGS | METH_KEYWORDS, "setDetectShadows(detectShadows) -> None"},
    {"setHistory", (PyCFunction)pyopencv_BackgroundSubtractorMOG2_setHistory, METH_VARARGS | METH_KEYWORDS, "setHistory(history) -> None"},
    {"setNMixtures", (PyCFunction)pyopencv_BackgroundSubtractorMOG2_setNMixtures, METH_VARARGS | METH_KEYWORDS, "setNMixtures(nmixtures) -> None"},
    {"setShadowThreshold", (PyCFunction)pyopencv_BackgroundSubtractorMOG2_setShadowThreshold, METH_VARARGS | METH_KEYWORDS, "setShadowThreshold(threshold) -> None"},
    {"setShadowValue", (PyCFunction)pyopencv_BackgroundSubtractorMOG2_setShadowValue, METH_VARARGS | METH_KEYWORDS, "setShadowValue(value) -> None"},
    {"setVarInit", (PyCFunction)pyopencv_BackgroundSubtractorMOG2_setVarInit, METH_VARARGS | METH_KEYWORDS, "setVarInit(varInit) -> None"},
    {"setVarMax", (PyCFunction)pyopencv_BackgroundSubtractorMOG2_setVarMax, METH_VARARGS | METH_KEYWORDS, "setVarMax(varMax) -> None"},
    {"setVarMin", (PyCFunction)pyopencv_BackgroundSubtractorMOG2_setVarMin, METH_VARARGS | METH_KEYWORDS, "setVarMin(varMin) -> None"},
    {"setVarThreshold", (PyCFunction)pyopencv_BackgroundSubtractorMOG2_setVarThreshold, METH_VARARGS | METH_KEYWORDS, "setVarThreshold(varThreshold) -> None"},
    {"setVarThresholdGen", (PyCFunction)pyopencv_BackgroundSubtractorMOG2_setVarThresholdGen, METH_VARARGS | METH_KEYWORDS, "setVarThresholdGen(varThresholdGen) -> None"},

    {NULL,          NULL}
};

static void pyopencv_BackgroundSubtractorMOG2_specials(void)
{
    pyopencv_BackgroundSubtractorMOG2_Type.tp_base = &pyopencv_BackgroundSubtractor_Type;
    pyopencv_BackgroundSubtractorMOG2_Type.tp_dealloc = pyopencv_BackgroundSubtractorMOG2_dealloc;
    pyopencv_BackgroundSubtractorMOG2_Type.tp_repr = pyopencv_BackgroundSubtractorMOG2_repr;
    pyopencv_BackgroundSubtractorMOG2_Type.tp_getset = pyopencv_BackgroundSubtractorMOG2_getseters;
    pyopencv_BackgroundSubtractorMOG2_Type.tp_methods = pyopencv_BackgroundSubtractorMOG2_methods;
}

static PyObject* pyopencv_BackgroundSubtractorKNN_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BackgroundSubtractorKNN %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BackgroundSubtractorKNN_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_BackgroundSubtractorKNN_setDetectShadows(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    cv::BackgroundSubtractorKNN* _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    bool detectShadows=0;

    const char* keywords[] = { "detectShadows", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:BackgroundSubtractorKNN.setDetectShadows", (char**)keywords, &detectShadows) )
    {
        ERRWRAP2(_self_->setDetectShadows(detectShadows));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorKNN_setDist2Threshold(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    cv::BackgroundSubtractorKNN* _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    double _dist2Threshold=0;

    const char* keywords[] = { "_dist2Threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorKNN.setDist2Threshold", (char**)keywords, &_dist2Threshold) )
    {
        ERRWRAP2(_self_->setDist2Threshold(_dist2Threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorKNN_setHistory(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    cv::BackgroundSubtractorKNN* _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    int history=0;

    const char* keywords[] = { "history", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorKNN.setHistory", (char**)keywords, &history) )
    {
        ERRWRAP2(_self_->setHistory(history));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorKNN_setNSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    cv::BackgroundSubtractorKNN* _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    int _nN=0;

    const char* keywords[] = { "_nN", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorKNN.setNSamples", (char**)keywords, &_nN) )
    {
        ERRWRAP2(_self_->setNSamples(_nN));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorKNN_setShadowThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    cv::BackgroundSubtractorKNN* _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorKNN.setShadowThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setShadowThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorKNN_setShadowValue(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    cv::BackgroundSubtractorKNN* _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    int value=0;

    const char* keywords[] = { "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorKNN.setShadowValue", (char**)keywords, &value) )
    {
        ERRWRAP2(_self_->setShadowValue(value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorKNN_setkNNSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorKNN_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    cv::BackgroundSubtractorKNN* _self_ = dynamic_cast<cv::BackgroundSubtractorKNN*>(((pyopencv_BackgroundSubtractorKNN_t*)self)->v.get());
    int _nkNN=0;

    const char* keywords[] = { "_nkNN", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorKNN.setkNNSamples", (char**)keywords, &_nkNN) )
    {
        ERRWRAP2(_self_->setkNNSamples(_nkNN));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_BackgroundSubtractorKNN_methods[] =
{
    {"setDetectShadows", (PyCFunction)pyopencv_BackgroundSubtractorKNN_setDetectShadows, METH_VARARGS | METH_KEYWORDS, "setDetectShadows(detectShadows) -> None"},
    {"setDist2Threshold", (PyCFunction)pyopencv_BackgroundSubtractorKNN_setDist2Threshold, METH_VARARGS | METH_KEYWORDS, "setDist2Threshold(_dist2Threshold) -> None"},
    {"setHistory", (PyCFunction)pyopencv_BackgroundSubtractorKNN_setHistory, METH_VARARGS | METH_KEYWORDS, "setHistory(history) -> None"},
    {"setNSamples", (PyCFunction)pyopencv_BackgroundSubtractorKNN_setNSamples, METH_VARARGS | METH_KEYWORDS, "setNSamples(_nN) -> None"},
    {"setShadowThreshold", (PyCFunction)pyopencv_BackgroundSubtractorKNN_setShadowThreshold, METH_VARARGS | METH_KEYWORDS, "setShadowThreshold(threshold) -> None"},
    {"setShadowValue", (PyCFunction)pyopencv_BackgroundSubtractorKNN_setShadowValue, METH_VARARGS | METH_KEYWORDS, "setShadowValue(value) -> None"},
    {"setkNNSamples", (PyCFunction)pyopencv_BackgroundSubtractorKNN_setkNNSamples, METH_VARARGS | METH_KEYWORDS, "setkNNSamples(_nkNN) -> None"},

    {NULL,          NULL}
};

static void pyopencv_BackgroundSubtractorKNN_specials(void)
{
    pyopencv_BackgroundSubtractorKNN_Type.tp_base = &pyopencv_BackgroundSubtractor_Type;
    pyopencv_BackgroundSubtractorKNN_Type.tp_dealloc = pyopencv_BackgroundSubtractorKNN_dealloc;
    pyopencv_BackgroundSubtractorKNN_Type.tp_repr = pyopencv_BackgroundSubtractorKNN_repr;
    pyopencv_BackgroundSubtractorKNN_Type.tp_getset = pyopencv_BackgroundSubtractorKNN_getseters;
    pyopencv_BackgroundSubtractorKNN_Type.tp_methods = pyopencv_BackgroundSubtractorKNN_methods;
}

static PyObject* pyopencv_BackgroundSubtractorGMG_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BackgroundSubtractorGMG %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BackgroundSubtractorGMG_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_BackgroundSubtractorGMG_setBackgroundPrior(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorGMG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorGMG' or its derivative)");
    cv::BackgroundSubtractorGMG* _self_ = dynamic_cast<cv::BackgroundSubtractorGMG*>(((pyopencv_BackgroundSubtractorGMG_t*)self)->v.get());
    double bgprior=0;

    const char* keywords[] = { "bgprior", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorGMG.setBackgroundPrior", (char**)keywords, &bgprior) )
    {
        ERRWRAP2(_self_->setBackgroundPrior(bgprior));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorGMG_setDecisionThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorGMG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorGMG' or its derivative)");
    cv::BackgroundSubtractorGMG* _self_ = dynamic_cast<cv::BackgroundSubtractorGMG*>(((pyopencv_BackgroundSubtractorGMG_t*)self)->v.get());
    double thresh=0;

    const char* keywords[] = { "thresh", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorGMG.setDecisionThreshold", (char**)keywords, &thresh) )
    {
        ERRWRAP2(_self_->setDecisionThreshold(thresh));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorGMG_setDefaultLearningRate(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorGMG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorGMG' or its derivative)");
    cv::BackgroundSubtractorGMG* _self_ = dynamic_cast<cv::BackgroundSubtractorGMG*>(((pyopencv_BackgroundSubtractorGMG_t*)self)->v.get());
    double lr=0;

    const char* keywords[] = { "lr", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorGMG.setDefaultLearningRate", (char**)keywords, &lr) )
    {
        ERRWRAP2(_self_->setDefaultLearningRate(lr));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorGMG_setMaxFeatures(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorGMG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorGMG' or its derivative)");
    cv::BackgroundSubtractorGMG* _self_ = dynamic_cast<cv::BackgroundSubtractorGMG*>(((pyopencv_BackgroundSubtractorGMG_t*)self)->v.get());
    int maxFeatures=0;

    const char* keywords[] = { "maxFeatures", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorGMG.setMaxFeatures", (char**)keywords, &maxFeatures) )
    {
        ERRWRAP2(_self_->setMaxFeatures(maxFeatures));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorGMG_setMaxVal(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorGMG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorGMG' or its derivative)");
    cv::BackgroundSubtractorGMG* _self_ = dynamic_cast<cv::BackgroundSubtractorGMG*>(((pyopencv_BackgroundSubtractorGMG_t*)self)->v.get());
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorGMG.setMaxVal", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setMaxVal(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorGMG_setMinVal(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorGMG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorGMG' or its derivative)");
    cv::BackgroundSubtractorGMG* _self_ = dynamic_cast<cv::BackgroundSubtractorGMG*>(((pyopencv_BackgroundSubtractorGMG_t*)self)->v.get());
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorGMG.setMinVal", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setMinVal(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorGMG_setNumFrames(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorGMG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorGMG' or its derivative)");
    cv::BackgroundSubtractorGMG* _self_ = dynamic_cast<cv::BackgroundSubtractorGMG*>(((pyopencv_BackgroundSubtractorGMG_t*)self)->v.get());
    int nframes=0;

    const char* keywords[] = { "nframes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorGMG.setNumFrames", (char**)keywords, &nframes) )
    {
        ERRWRAP2(_self_->setNumFrames(nframes));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorGMG_setQuantizationLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorGMG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorGMG' or its derivative)");
    cv::BackgroundSubtractorGMG* _self_ = dynamic_cast<cv::BackgroundSubtractorGMG*>(((pyopencv_BackgroundSubtractorGMG_t*)self)->v.get());
    int nlevels=0;

    const char* keywords[] = { "nlevels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorGMG.setQuantizationLevels", (char**)keywords, &nlevels) )
    {
        ERRWRAP2(_self_->setQuantizationLevels(nlevels));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorGMG_setSmoothingRadius(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorGMG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorGMG' or its derivative)");
    cv::BackgroundSubtractorGMG* _self_ = dynamic_cast<cv::BackgroundSubtractorGMG*>(((pyopencv_BackgroundSubtractorGMG_t*)self)->v.get());
    int radius=0;

    const char* keywords[] = { "radius", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorGMG.setSmoothingRadius", (char**)keywords, &radius) )
    {
        ERRWRAP2(_self_->setSmoothingRadius(radius));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_BackgroundSubtractorGMG_setUpdateBackgroundModel(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BackgroundSubtractorGMG_Type))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorGMG' or its derivative)");
    cv::BackgroundSubtractorGMG* _self_ = dynamic_cast<cv::BackgroundSubtractorGMG*>(((pyopencv_BackgroundSubtractorGMG_t*)self)->v.get());
    bool update=0;

    const char* keywords[] = { "update", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:BackgroundSubtractorGMG.setUpdateBackgroundModel", (char**)keywords, &update) )
    {
        ERRWRAP2(_self_->setUpdateBackgroundModel(update));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_BackgroundSubtractorGMG_methods[] =
{
    {"setBackgroundPrior", (PyCFunction)pyopencv_BackgroundSubtractorGMG_setBackgroundPrior, METH_VARARGS | METH_KEYWORDS, "setBackgroundPrior(bgprior) -> None"},
    {"setDecisionThreshold", (PyCFunction)pyopencv_BackgroundSubtractorGMG_setDecisionThreshold, METH_VARARGS | METH_KEYWORDS, "setDecisionThreshold(thresh) -> None"},
    {"setDefaultLearningRate", (PyCFunction)pyopencv_BackgroundSubtractorGMG_setDefaultLearningRate, METH_VARARGS | METH_KEYWORDS, "setDefaultLearningRate(lr) -> None"},
    {"setMaxFeatures", (PyCFunction)pyopencv_BackgroundSubtractorGMG_setMaxFeatures, METH_VARARGS | METH_KEYWORDS, "setMaxFeatures(maxFeatures) -> None"},
    {"setMaxVal", (PyCFunction)pyopencv_BackgroundSubtractorGMG_setMaxVal, METH_VARARGS | METH_KEYWORDS, "setMaxVal(val) -> None"},
    {"setMinVal", (PyCFunction)pyopencv_BackgroundSubtractorGMG_setMinVal, METH_VARARGS | METH_KEYWORDS, "setMinVal(val) -> None"},
    {"setNumFrames", (PyCFunction)pyopencv_BackgroundSubtractorGMG_setNumFrames, METH_VARARGS | METH_KEYWORDS, "setNumFrames(nframes) -> None"},
    {"setQuantizationLevels", (PyCFunction)pyopencv_BackgroundSubtractorGMG_setQuantizationLevels, METH_VARARGS | METH_KEYWORDS, "setQuantizationLevels(nlevels) -> None"},
    {"setSmoothingRadius", (PyCFunction)pyopencv_BackgroundSubtractorGMG_setSmoothingRadius, METH_VARARGS | METH_KEYWORDS, "setSmoothingRadius(radius) -> None"},
    {"setUpdateBackgroundModel", (PyCFunction)pyopencv_BackgroundSubtractorGMG_setUpdateBackgroundModel, METH_VARARGS | METH_KEYWORDS, "setUpdateBackgroundModel(update) -> None"},

    {NULL,          NULL}
};

static void pyopencv_BackgroundSubtractorGMG_specials(void)
{
    pyopencv_BackgroundSubtractorGMG_Type.tp_base = &pyopencv_BackgroundSubtractor_Type;
    pyopencv_BackgroundSubtractorGMG_Type.tp_dealloc = pyopencv_BackgroundSubtractorGMG_dealloc;
    pyopencv_BackgroundSubtractorGMG_Type.tp_repr = pyopencv_BackgroundSubtractorGMG_repr;
    pyopencv_BackgroundSubtractorGMG_Type.tp_getset = pyopencv_BackgroundSubtractorGMG_getseters;
    pyopencv_BackgroundSubtractorGMG_Type.tp_methods = pyopencv_BackgroundSubtractorGMG_methods;
}

static PyObject* pyopencv_KalmanFilter_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<KalmanFilter %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_KalmanFilter_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_KalmanFilter_correct(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KalmanFilter_Type))
        return failmsgp("Incorrect type of self (must be 'KalmanFilter' or its derivative)");
    cv::KalmanFilter* _self_ = ((pyopencv_KalmanFilter_t*)self)->v.get();
    PyObject* pyobj_measurement = NULL;
    Mat measurement;
    Mat retval;

    const char* keywords[] = { "measurement", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:KalmanFilter.correct", (char**)keywords, &pyobj_measurement) &&
        pyopencv_to(pyobj_measurement, measurement, ArgInfo("measurement", 0)) )
    {
        ERRWRAP2(retval = _self_->correct(measurement));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_KalmanFilter_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_KalmanFilter_Type))
        return failmsgp("Incorrect type of self (must be 'KalmanFilter' or its derivative)");
    cv::KalmanFilter* _self_ = ((pyopencv_KalmanFilter_t*)self)->v.get();
    PyObject* pyobj_control = NULL;
    Mat control;
    Mat retval;

    const char* keywords[] = { "control", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:KalmanFilter.predict", (char**)keywords, &pyobj_control) &&
        pyopencv_to(pyobj_control, control, ArgInfo("control", 0)) )
    {
        ERRWRAP2(retval = _self_->predict(control));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_KalmanFilter_methods[] =
{
    {"correct", (PyCFunction)pyopencv_KalmanFilter_correct, METH_VARARGS | METH_KEYWORDS, "correct(measurement) -> retval"},
    {"predict", (PyCFunction)pyopencv_KalmanFilter_predict, METH_VARARGS | METH_KEYWORDS, "predict([, control]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_KalmanFilter_specials(void)
{
    pyopencv_KalmanFilter_Type.tp_base = NULL;
    pyopencv_KalmanFilter_Type.tp_dealloc = pyopencv_KalmanFilter_dealloc;
    pyopencv_KalmanFilter_Type.tp_repr = pyopencv_KalmanFilter_repr;
    pyopencv_KalmanFilter_Type.tp_getset = pyopencv_KalmanFilter_getseters;
    pyopencv_KalmanFilter_Type.tp_methods = pyopencv_KalmanFilter_methods;
}

static PyObject* pyopencv_Tonemap_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<Tonemap %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_Tonemap_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_Tonemap_process(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Tonemap_Type))
        return failmsgp("Incorrect type of self (must be 'Tonemap' or its derivative)");
    cv::Tonemap* _self_ = dynamic_cast<cv::Tonemap*>(((pyopencv_Tonemap_t*)self)->v.get());
    PyObject* pyobj_src = NULL;
    Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Tonemap.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        return pyopencv_from(dst);
    }

    return NULL;
}

static PyObject* pyopencv_Tonemap_setGamma(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Tonemap_Type))
        return failmsgp("Incorrect type of self (must be 'Tonemap' or its derivative)");
    cv::Tonemap* _self_ = dynamic_cast<cv::Tonemap*>(((pyopencv_Tonemap_t*)self)->v.get());
    float gamma=0.f;

    const char* keywords[] = { "gamma", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:Tonemap.setGamma", (char**)keywords, &gamma) )
    {
        ERRWRAP2(_self_->setGamma(gamma));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_Tonemap_methods[] =
{
    {"process", (PyCFunction)pyopencv_Tonemap_process, METH_VARARGS | METH_KEYWORDS, "process(src[, dst]) -> dst"},
    {"setGamma", (PyCFunction)pyopencv_Tonemap_setGamma, METH_VARARGS | METH_KEYWORDS, "setGamma(gamma) -> None"},

    {NULL,          NULL}
};

static void pyopencv_Tonemap_specials(void)
{
    pyopencv_Tonemap_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_Tonemap_Type.tp_dealloc = pyopencv_Tonemap_dealloc;
    pyopencv_Tonemap_Type.tp_repr = pyopencv_Tonemap_repr;
    pyopencv_Tonemap_Type.tp_getset = pyopencv_Tonemap_getseters;
    pyopencv_Tonemap_Type.tp_methods = pyopencv_Tonemap_methods;
}

static PyObject* pyopencv_TonemapDrago_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<TonemapDrago %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_TonemapDrago_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_TonemapDrago_setBias(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_TonemapDrago_Type))
        return failmsgp("Incorrect type of self (must be 'TonemapDrago' or its derivative)");
    cv::TonemapDrago* _self_ = dynamic_cast<cv::TonemapDrago*>(((pyopencv_TonemapDrago_t*)self)->v.get());
    float bias=0.f;

    const char* keywords[] = { "bias", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapDrago.setBias", (char**)keywords, &bias) )
    {
        ERRWRAP2(_self_->setBias(bias));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_TonemapDrago_setSaturation(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_TonemapDrago_Type))
        return failmsgp("Incorrect type of self (must be 'TonemapDrago' or its derivative)");
    cv::TonemapDrago* _self_ = dynamic_cast<cv::TonemapDrago*>(((pyopencv_TonemapDrago_t*)self)->v.get());
    float saturation=0.f;

    const char* keywords[] = { "saturation", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapDrago.setSaturation", (char**)keywords, &saturation) )
    {
        ERRWRAP2(_self_->setSaturation(saturation));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_TonemapDrago_methods[] =
{
    {"setBias", (PyCFunction)pyopencv_TonemapDrago_setBias, METH_VARARGS | METH_KEYWORDS, "setBias(bias) -> None"},
    {"setSaturation", (PyCFunction)pyopencv_TonemapDrago_setSaturation, METH_VARARGS | METH_KEYWORDS, "setSaturation(saturation) -> None"},

    {NULL,          NULL}
};

static void pyopencv_TonemapDrago_specials(void)
{
    pyopencv_TonemapDrago_Type.tp_base = &pyopencv_Tonemap_Type;
    pyopencv_TonemapDrago_Type.tp_dealloc = pyopencv_TonemapDrago_dealloc;
    pyopencv_TonemapDrago_Type.tp_repr = pyopencv_TonemapDrago_repr;
    pyopencv_TonemapDrago_Type.tp_getset = pyopencv_TonemapDrago_getseters;
    pyopencv_TonemapDrago_Type.tp_methods = pyopencv_TonemapDrago_methods;
}

static PyObject* pyopencv_TonemapDurand_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<TonemapDurand %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_TonemapDurand_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_TonemapDurand_setContrast(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_TonemapDurand_Type))
        return failmsgp("Incorrect type of self (must be 'TonemapDurand' or its derivative)");
    cv::TonemapDurand* _self_ = dynamic_cast<cv::TonemapDurand*>(((pyopencv_TonemapDurand_t*)self)->v.get());
    float contrast=0.f;

    const char* keywords[] = { "contrast", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapDurand.setContrast", (char**)keywords, &contrast) )
    {
        ERRWRAP2(_self_->setContrast(contrast));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_TonemapDurand_setSaturation(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_TonemapDurand_Type))
        return failmsgp("Incorrect type of self (must be 'TonemapDurand' or its derivative)");
    cv::TonemapDurand* _self_ = dynamic_cast<cv::TonemapDurand*>(((pyopencv_TonemapDurand_t*)self)->v.get());
    float saturation=0.f;

    const char* keywords[] = { "saturation", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapDurand.setSaturation", (char**)keywords, &saturation) )
    {
        ERRWRAP2(_self_->setSaturation(saturation));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_TonemapDurand_setSigmaColor(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_TonemapDurand_Type))
        return failmsgp("Incorrect type of self (must be 'TonemapDurand' or its derivative)");
    cv::TonemapDurand* _self_ = dynamic_cast<cv::TonemapDurand*>(((pyopencv_TonemapDurand_t*)self)->v.get());
    float sigma_color=0.f;

    const char* keywords[] = { "sigma_color", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapDurand.setSigmaColor", (char**)keywords, &sigma_color) )
    {
        ERRWRAP2(_self_->setSigmaColor(sigma_color));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_TonemapDurand_setSigmaSpace(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_TonemapDurand_Type))
        return failmsgp("Incorrect type of self (must be 'TonemapDurand' or its derivative)");
    cv::TonemapDurand* _self_ = dynamic_cast<cv::TonemapDurand*>(((pyopencv_TonemapDurand_t*)self)->v.get());
    float sigma_space=0.f;

    const char* keywords[] = { "sigma_space", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapDurand.setSigmaSpace", (char**)keywords, &sigma_space) )
    {
        ERRWRAP2(_self_->setSigmaSpace(sigma_space));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_TonemapDurand_methods[] =
{
    {"setContrast", (PyCFunction)pyopencv_TonemapDurand_setContrast, METH_VARARGS | METH_KEYWORDS, "setContrast(contrast) -> None"},
    {"setSaturation", (PyCFunction)pyopencv_TonemapDurand_setSaturation, METH_VARARGS | METH_KEYWORDS, "setSaturation(saturation) -> None"},
    {"setSigmaColor", (PyCFunction)pyopencv_TonemapDurand_setSigmaColor, METH_VARARGS | METH_KEYWORDS, "setSigmaColor(sigma_color) -> None"},
    {"setSigmaSpace", (PyCFunction)pyopencv_TonemapDurand_setSigmaSpace, METH_VARARGS | METH_KEYWORDS, "setSigmaSpace(sigma_space) -> None"},

    {NULL,          NULL}
};

static void pyopencv_TonemapDurand_specials(void)
{
    pyopencv_TonemapDurand_Type.tp_base = &pyopencv_Tonemap_Type;
    pyopencv_TonemapDurand_Type.tp_dealloc = pyopencv_TonemapDurand_dealloc;
    pyopencv_TonemapDurand_Type.tp_repr = pyopencv_TonemapDurand_repr;
    pyopencv_TonemapDurand_Type.tp_getset = pyopencv_TonemapDurand_getseters;
    pyopencv_TonemapDurand_Type.tp_methods = pyopencv_TonemapDurand_methods;
}

static PyObject* pyopencv_TonemapReinhard_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<TonemapReinhard %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_TonemapReinhard_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_TonemapReinhard_setColorAdaptation(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_TonemapReinhard_Type))
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    cv::TonemapReinhard* _self_ = dynamic_cast<cv::TonemapReinhard*>(((pyopencv_TonemapReinhard_t*)self)->v.get());
    float color_adapt=0.f;

    const char* keywords[] = { "color_adapt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapReinhard.setColorAdaptation", (char**)keywords, &color_adapt) )
    {
        ERRWRAP2(_self_->setColorAdaptation(color_adapt));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_TonemapReinhard_setIntensity(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_TonemapReinhard_Type))
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    cv::TonemapReinhard* _self_ = dynamic_cast<cv::TonemapReinhard*>(((pyopencv_TonemapReinhard_t*)self)->v.get());
    float intensity=0.f;

    const char* keywords[] = { "intensity", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapReinhard.setIntensity", (char**)keywords, &intensity) )
    {
        ERRWRAP2(_self_->setIntensity(intensity));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_TonemapReinhard_setLightAdaptation(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_TonemapReinhard_Type))
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    cv::TonemapReinhard* _self_ = dynamic_cast<cv::TonemapReinhard*>(((pyopencv_TonemapReinhard_t*)self)->v.get());
    float light_adapt=0.f;

    const char* keywords[] = { "light_adapt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapReinhard.setLightAdaptation", (char**)keywords, &light_adapt) )
    {
        ERRWRAP2(_self_->setLightAdaptation(light_adapt));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_TonemapReinhard_methods[] =
{
    {"setColorAdaptation", (PyCFunction)pyopencv_TonemapReinhard_setColorAdaptation, METH_VARARGS | METH_KEYWORDS, "setColorAdaptation(color_adapt) -> None"},
    {"setIntensity", (PyCFunction)pyopencv_TonemapReinhard_setIntensity, METH_VARARGS | METH_KEYWORDS, "setIntensity(intensity) -> None"},
    {"setLightAdaptation", (PyCFunction)pyopencv_TonemapReinhard_setLightAdaptation, METH_VARARGS | METH_KEYWORDS, "setLightAdaptation(light_adapt) -> None"},

    {NULL,          NULL}
};

static void pyopencv_TonemapReinhard_specials(void)
{
    pyopencv_TonemapReinhard_Type.tp_base = &pyopencv_Tonemap_Type;
    pyopencv_TonemapReinhard_Type.tp_dealloc = pyopencv_TonemapReinhard_dealloc;
    pyopencv_TonemapReinhard_Type.tp_repr = pyopencv_TonemapReinhard_repr;
    pyopencv_TonemapReinhard_Type.tp_getset = pyopencv_TonemapReinhard_getseters;
    pyopencv_TonemapReinhard_Type.tp_methods = pyopencv_TonemapReinhard_methods;
}

static PyObject* pyopencv_TonemapMantiuk_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<TonemapMantiuk %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_TonemapMantiuk_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_TonemapMantiuk_setSaturation(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_TonemapMantiuk_Type))
        return failmsgp("Incorrect type of self (must be 'TonemapMantiuk' or its derivative)");
    cv::TonemapMantiuk* _self_ = dynamic_cast<cv::TonemapMantiuk*>(((pyopencv_TonemapMantiuk_t*)self)->v.get());
    float saturation=0.f;

    const char* keywords[] = { "saturation", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapMantiuk.setSaturation", (char**)keywords, &saturation) )
    {
        ERRWRAP2(_self_->setSaturation(saturation));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_TonemapMantiuk_setScale(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_TonemapMantiuk_Type))
        return failmsgp("Incorrect type of self (must be 'TonemapMantiuk' or its derivative)");
    cv::TonemapMantiuk* _self_ = dynamic_cast<cv::TonemapMantiuk*>(((pyopencv_TonemapMantiuk_t*)self)->v.get());
    float scale=0.f;

    const char* keywords[] = { "scale", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:TonemapMantiuk.setScale", (char**)keywords, &scale) )
    {
        ERRWRAP2(_self_->setScale(scale));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_TonemapMantiuk_methods[] =
{
    {"setSaturation", (PyCFunction)pyopencv_TonemapMantiuk_setSaturation, METH_VARARGS | METH_KEYWORDS, "setSaturation(saturation) -> None"},
    {"setScale", (PyCFunction)pyopencv_TonemapMantiuk_setScale, METH_VARARGS | METH_KEYWORDS, "setScale(scale) -> None"},

    {NULL,          NULL}
};

static void pyopencv_TonemapMantiuk_specials(void)
{
    pyopencv_TonemapMantiuk_Type.tp_base = &pyopencv_Tonemap_Type;
    pyopencv_TonemapMantiuk_Type.tp_dealloc = pyopencv_TonemapMantiuk_dealloc;
    pyopencv_TonemapMantiuk_Type.tp_repr = pyopencv_TonemapMantiuk_repr;
    pyopencv_TonemapMantiuk_Type.tp_getset = pyopencv_TonemapMantiuk_getseters;
    pyopencv_TonemapMantiuk_Type.tp_methods = pyopencv_TonemapMantiuk_methods;
}

static PyObject* pyopencv_AlignExposures_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<AlignExposures %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_AlignExposures_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_AlignExposures_process(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_AlignExposures_Type))
        return failmsgp("Incorrect type of self (must be 'AlignExposures' or its derivative)");
    cv::AlignExposures* _self_ = dynamic_cast<cv::AlignExposures*>(((pyopencv_AlignExposures_t*)self)->v.get());
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "dst", "times", "response", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO:AlignExposures.process", (char**)keywords, &pyobj_src, &pyobj_dst, &pyobj_times, &pyobj_response) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 0)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_AlignExposures_methods[] =
{
    {"process", (PyCFunction)pyopencv_AlignExposures_process, METH_VARARGS | METH_KEYWORDS, "process(src, dst, times, response) -> None"},

    {NULL,          NULL}
};

static void pyopencv_AlignExposures_specials(void)
{
    pyopencv_AlignExposures_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_AlignExposures_Type.tp_dealloc = pyopencv_AlignExposures_dealloc;
    pyopencv_AlignExposures_Type.tp_repr = pyopencv_AlignExposures_repr;
    pyopencv_AlignExposures_Type.tp_getset = pyopencv_AlignExposures_getseters;
    pyopencv_AlignExposures_Type.tp_methods = pyopencv_AlignExposures_methods;
}

static PyObject* pyopencv_AlignMTB_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<AlignMTB %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_AlignMTB_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_AlignMTB_calculateShift(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    cv::AlignMTB* _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    PyObject* pyobj_img0 = NULL;
    Mat img0;
    PyObject* pyobj_img1 = NULL;
    Mat img1;
    Point retval;

    const char* keywords[] = { "img0", "img1", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:AlignMTB.calculateShift", (char**)keywords, &pyobj_img0, &pyobj_img1) &&
        pyopencv_to(pyobj_img0, img0, ArgInfo("img0", 0)) &&
        pyopencv_to(pyobj_img1, img1, ArgInfo("img1", 0)) )
    {
        ERRWRAP2(retval = _self_->calculateShift(img0, img1));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_AlignMTB_computeBitmaps(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    cv::AlignMTB* _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_tb = NULL;
    Mat tb;
    PyObject* pyobj_eb = NULL;
    Mat eb;

    const char* keywords[] = { "img", "tb", "eb", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OO:AlignMTB.computeBitmaps", (char**)keywords, &pyobj_img, &pyobj_tb, &pyobj_eb) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_tb, tb, ArgInfo("tb", 1)) &&
        pyopencv_to(pyobj_eb, eb, ArgInfo("eb", 1)) )
    {
        ERRWRAP2(_self_->computeBitmaps(img, tb, eb));
        return Py_BuildValue("(NN)", pyopencv_from(tb), pyopencv_from(eb));
    }

    return NULL;
}

static PyObject* pyopencv_AlignMTB_process(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    cv::AlignMTB* _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "dst", "times", "response", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO:AlignMTB.process", (char**)keywords, &pyobj_src, &pyobj_dst, &pyobj_times, &pyobj_response) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 0)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:AlignMTB.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_AlignMTB_setCut(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    cv::AlignMTB* _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    bool value=0;

    const char* keywords[] = { "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:AlignMTB.setCut", (char**)keywords, &value) )
    {
        ERRWRAP2(_self_->setCut(value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_AlignMTB_setExcludeRange(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    cv::AlignMTB* _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    int exclude_range=0;

    const char* keywords[] = { "exclude_range", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AlignMTB.setExcludeRange", (char**)keywords, &exclude_range) )
    {
        ERRWRAP2(_self_->setExcludeRange(exclude_range));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_AlignMTB_setMaxBits(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    cv::AlignMTB* _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    int max_bits=0;

    const char* keywords[] = { "max_bits", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AlignMTB.setMaxBits", (char**)keywords, &max_bits) )
    {
        ERRWRAP2(_self_->setMaxBits(max_bits));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_AlignMTB_shiftMat(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_AlignMTB_Type))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    cv::AlignMTB* _self_ = dynamic_cast<cv::AlignMTB*>(((pyopencv_AlignMTB_t*)self)->v.get());
    PyObject* pyobj_src = NULL;
    Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_shift = NULL;
    Point shift;

    const char* keywords[] = { "src", "shift", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:AlignMTB.shiftMat", (char**)keywords, &pyobj_src, &pyobj_shift, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_shift, shift, ArgInfo("shift", 0)) )
    {
        ERRWRAP2(_self_->shiftMat(src, dst, shift));
        return pyopencv_from(dst);
    }

    return NULL;
}



static PyMethodDef pyopencv_AlignMTB_methods[] =
{
    {"calculateShift", (PyCFunction)pyopencv_AlignMTB_calculateShift, METH_VARARGS | METH_KEYWORDS, "calculateShift(img0, img1) -> retval"},
    {"computeBitmaps", (PyCFunction)pyopencv_AlignMTB_computeBitmaps, METH_VARARGS | METH_KEYWORDS, "computeBitmaps(img[, tb[, eb]]) -> tb, eb"},
    {"process", (PyCFunction)pyopencv_AlignMTB_process, METH_VARARGS | METH_KEYWORDS, "process(src, dst, times, response) -> None  or  process(src, dst) -> None"},
    {"setCut", (PyCFunction)pyopencv_AlignMTB_setCut, METH_VARARGS | METH_KEYWORDS, "setCut(value) -> None"},
    {"setExcludeRange", (PyCFunction)pyopencv_AlignMTB_setExcludeRange, METH_VARARGS | METH_KEYWORDS, "setExcludeRange(exclude_range) -> None"},
    {"setMaxBits", (PyCFunction)pyopencv_AlignMTB_setMaxBits, METH_VARARGS | METH_KEYWORDS, "setMaxBits(max_bits) -> None"},
    {"shiftMat", (PyCFunction)pyopencv_AlignMTB_shiftMat, METH_VARARGS | METH_KEYWORDS, "shiftMat(src, shift[, dst]) -> dst"},

    {NULL,          NULL}
};

static void pyopencv_AlignMTB_specials(void)
{
    pyopencv_AlignMTB_Type.tp_base = &pyopencv_AlignExposures_Type;
    pyopencv_AlignMTB_Type.tp_dealloc = pyopencv_AlignMTB_dealloc;
    pyopencv_AlignMTB_Type.tp_repr = pyopencv_AlignMTB_repr;
    pyopencv_AlignMTB_Type.tp_getset = pyopencv_AlignMTB_getseters;
    pyopencv_AlignMTB_Type.tp_methods = pyopencv_AlignMTB_methods;
}

static PyObject* pyopencv_CalibrateCRF_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<CalibrateCRF %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CalibrateCRF_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CalibrateCRF_process(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CalibrateCRF_Type))
        return failmsgp("Incorrect type of self (must be 'CalibrateCRF' or its derivative)");
    cv::CalibrateCRF* _self_ = dynamic_cast<cv::CalibrateCRF*>(((pyopencv_CalibrateCRF_t*)self)->v.get());
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:CalibrateCRF.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }

    return NULL;
}



static PyMethodDef pyopencv_CalibrateCRF_methods[] =
{
    {"process", (PyCFunction)pyopencv_CalibrateCRF_process, METH_VARARGS | METH_KEYWORDS, "process(src, times[, dst]) -> dst"},

    {NULL,          NULL}
};

static void pyopencv_CalibrateCRF_specials(void)
{
    pyopencv_CalibrateCRF_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_CalibrateCRF_Type.tp_dealloc = pyopencv_CalibrateCRF_dealloc;
    pyopencv_CalibrateCRF_Type.tp_repr = pyopencv_CalibrateCRF_repr;
    pyopencv_CalibrateCRF_Type.tp_getset = pyopencv_CalibrateCRF_getseters;
    pyopencv_CalibrateCRF_Type.tp_methods = pyopencv_CalibrateCRF_methods;
}

static PyObject* pyopencv_CalibrateDebevec_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<CalibrateDebevec %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CalibrateDebevec_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CalibrateDebevec_setLambda(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CalibrateDebevec_Type))
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    cv::CalibrateDebevec* _self_ = dynamic_cast<cv::CalibrateDebevec*>(((pyopencv_CalibrateDebevec_t*)self)->v.get());
    float lambda=0.f;

    const char* keywords[] = { "lambda", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:CalibrateDebevec.setLambda", (char**)keywords, &lambda) )
    {
        ERRWRAP2(_self_->setLambda(lambda));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CalibrateDebevec_setRandom(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CalibrateDebevec_Type))
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    cv::CalibrateDebevec* _self_ = dynamic_cast<cv::CalibrateDebevec*>(((pyopencv_CalibrateDebevec_t*)self)->v.get());
    bool random=0;

    const char* keywords[] = { "random", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:CalibrateDebevec.setRandom", (char**)keywords, &random) )
    {
        ERRWRAP2(_self_->setRandom(random));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CalibrateDebevec_setSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CalibrateDebevec_Type))
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    cv::CalibrateDebevec* _self_ = dynamic_cast<cv::CalibrateDebevec*>(((pyopencv_CalibrateDebevec_t*)self)->v.get());
    int samples=0;

    const char* keywords[] = { "samples", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:CalibrateDebevec.setSamples", (char**)keywords, &samples) )
    {
        ERRWRAP2(_self_->setSamples(samples));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_CalibrateDebevec_methods[] =
{
    {"setLambda", (PyCFunction)pyopencv_CalibrateDebevec_setLambda, METH_VARARGS | METH_KEYWORDS, "setLambda(lambda) -> None"},
    {"setRandom", (PyCFunction)pyopencv_CalibrateDebevec_setRandom, METH_VARARGS | METH_KEYWORDS, "setRandom(random) -> None"},
    {"setSamples", (PyCFunction)pyopencv_CalibrateDebevec_setSamples, METH_VARARGS | METH_KEYWORDS, "setSamples(samples) -> None"},

    {NULL,          NULL}
};

static void pyopencv_CalibrateDebevec_specials(void)
{
    pyopencv_CalibrateDebevec_Type.tp_base = &pyopencv_CalibrateCRF_Type;
    pyopencv_CalibrateDebevec_Type.tp_dealloc = pyopencv_CalibrateDebevec_dealloc;
    pyopencv_CalibrateDebevec_Type.tp_repr = pyopencv_CalibrateDebevec_repr;
    pyopencv_CalibrateDebevec_Type.tp_getset = pyopencv_CalibrateDebevec_getseters;
    pyopencv_CalibrateDebevec_Type.tp_methods = pyopencv_CalibrateDebevec_methods;
}

static PyObject* pyopencv_CalibrateRobertson_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<CalibrateRobertson %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CalibrateRobertson_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CalibrateRobertson_setMaxIter(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CalibrateRobertson_Type))
        return failmsgp("Incorrect type of self (must be 'CalibrateRobertson' or its derivative)");
    cv::CalibrateRobertson* _self_ = dynamic_cast<cv::CalibrateRobertson*>(((pyopencv_CalibrateRobertson_t*)self)->v.get());
    int max_iter=0;

    const char* keywords[] = { "max_iter", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:CalibrateRobertson.setMaxIter", (char**)keywords, &max_iter) )
    {
        ERRWRAP2(_self_->setMaxIter(max_iter));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CalibrateRobertson_setThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CalibrateRobertson_Type))
        return failmsgp("Incorrect type of self (must be 'CalibrateRobertson' or its derivative)");
    cv::CalibrateRobertson* _self_ = dynamic_cast<cv::CalibrateRobertson*>(((pyopencv_CalibrateRobertson_t*)self)->v.get());
    float threshold=0.f;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:CalibrateRobertson.setThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_CalibrateRobertson_methods[] =
{
    {"setMaxIter", (PyCFunction)pyopencv_CalibrateRobertson_setMaxIter, METH_VARARGS | METH_KEYWORDS, "setMaxIter(max_iter) -> None"},
    {"setThreshold", (PyCFunction)pyopencv_CalibrateRobertson_setThreshold, METH_VARARGS | METH_KEYWORDS, "setThreshold(threshold) -> None"},

    {NULL,          NULL}
};

static void pyopencv_CalibrateRobertson_specials(void)
{
    pyopencv_CalibrateRobertson_Type.tp_base = &pyopencv_CalibrateCRF_Type;
    pyopencv_CalibrateRobertson_Type.tp_dealloc = pyopencv_CalibrateRobertson_dealloc;
    pyopencv_CalibrateRobertson_Type.tp_repr = pyopencv_CalibrateRobertson_repr;
    pyopencv_CalibrateRobertson_Type.tp_getset = pyopencv_CalibrateRobertson_getseters;
    pyopencv_CalibrateRobertson_Type.tp_methods = pyopencv_CalibrateRobertson_methods;
}

static PyObject* pyopencv_MergeExposures_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<MergeExposures %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_MergeExposures_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_MergeExposures_process(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_MergeExposures_Type))
        return failmsgp("Incorrect type of self (must be 'MergeExposures' or its derivative)");
    cv::MergeExposures* _self_ = dynamic_cast<cv::MergeExposures*>(((pyopencv_MergeExposures_t*)self)->v.get());
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:MergeExposures.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }

    return NULL;
}



static PyMethodDef pyopencv_MergeExposures_methods[] =
{
    {"process", (PyCFunction)pyopencv_MergeExposures_process, METH_VARARGS | METH_KEYWORDS, "process(src, times, response[, dst]) -> dst"},

    {NULL,          NULL}
};

static void pyopencv_MergeExposures_specials(void)
{
    pyopencv_MergeExposures_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_MergeExposures_Type.tp_dealloc = pyopencv_MergeExposures_dealloc;
    pyopencv_MergeExposures_Type.tp_repr = pyopencv_MergeExposures_repr;
    pyopencv_MergeExposures_Type.tp_getset = pyopencv_MergeExposures_getseters;
    pyopencv_MergeExposures_Type.tp_methods = pyopencv_MergeExposures_methods;
}

static PyObject* pyopencv_MergeDebevec_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<MergeDebevec %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_MergeDebevec_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_MergeDebevec_process(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_MergeDebevec_Type))
        return failmsgp("Incorrect type of self (must be 'MergeDebevec' or its derivative)");
    cv::MergeDebevec* _self_ = dynamic_cast<cv::MergeDebevec*>(((pyopencv_MergeDebevec_t*)self)->v.get());
    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:MergeDebevec.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:MergeDebevec.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_MergeDebevec_methods[] =
{
    {"process", (PyCFunction)pyopencv_MergeDebevec_process, METH_VARARGS | METH_KEYWORDS, "process(src, times, response[, dst]) -> dst  or  process(src, times[, dst]) -> dst"},

    {NULL,          NULL}
};

static void pyopencv_MergeDebevec_specials(void)
{
    pyopencv_MergeDebevec_Type.tp_base = &pyopencv_MergeExposures_Type;
    pyopencv_MergeDebevec_Type.tp_dealloc = pyopencv_MergeDebevec_dealloc;
    pyopencv_MergeDebevec_Type.tp_repr = pyopencv_MergeDebevec_repr;
    pyopencv_MergeDebevec_Type.tp_getset = pyopencv_MergeDebevec_getseters;
    pyopencv_MergeDebevec_Type.tp_methods = pyopencv_MergeDebevec_methods;
}

static PyObject* pyopencv_MergeMertens_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<MergeMertens %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_MergeMertens_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_MergeMertens_process(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_MergeMertens_Type))
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    cv::MergeMertens* _self_ = dynamic_cast<cv::MergeMertens*>(((pyopencv_MergeMertens_t*)self)->v.get());
    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:MergeMertens.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:MergeMertens.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        return pyopencv_from(dst);
    }
    }

    return NULL;
}

static PyObject* pyopencv_MergeMertens_setContrastWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_MergeMertens_Type))
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    cv::MergeMertens* _self_ = dynamic_cast<cv::MergeMertens*>(((pyopencv_MergeMertens_t*)self)->v.get());
    float contrast_weiht=0.f;

    const char* keywords[] = { "contrast_weiht", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:MergeMertens.setContrastWeight", (char**)keywords, &contrast_weiht) )
    {
        ERRWRAP2(_self_->setContrastWeight(contrast_weiht));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_MergeMertens_setExposureWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_MergeMertens_Type))
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    cv::MergeMertens* _self_ = dynamic_cast<cv::MergeMertens*>(((pyopencv_MergeMertens_t*)self)->v.get());
    float exposure_weight=0.f;

    const char* keywords[] = { "exposure_weight", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:MergeMertens.setExposureWeight", (char**)keywords, &exposure_weight) )
    {
        ERRWRAP2(_self_->setExposureWeight(exposure_weight));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_MergeMertens_setSaturationWeight(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_MergeMertens_Type))
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    cv::MergeMertens* _self_ = dynamic_cast<cv::MergeMertens*>(((pyopencv_MergeMertens_t*)self)->v.get());
    float saturation_weight=0.f;

    const char* keywords[] = { "saturation_weight", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:MergeMertens.setSaturationWeight", (char**)keywords, &saturation_weight) )
    {
        ERRWRAP2(_self_->setSaturationWeight(saturation_weight));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_MergeMertens_methods[] =
{
    {"process", (PyCFunction)pyopencv_MergeMertens_process, METH_VARARGS | METH_KEYWORDS, "process(src, times, response[, dst]) -> dst  or  process(src[, dst]) -> dst"},
    {"setContrastWeight", (PyCFunction)pyopencv_MergeMertens_setContrastWeight, METH_VARARGS | METH_KEYWORDS, "setContrastWeight(contrast_weiht) -> None"},
    {"setExposureWeight", (PyCFunction)pyopencv_MergeMertens_setExposureWeight, METH_VARARGS | METH_KEYWORDS, "setExposureWeight(exposure_weight) -> None"},
    {"setSaturationWeight", (PyCFunction)pyopencv_MergeMertens_setSaturationWeight, METH_VARARGS | METH_KEYWORDS, "setSaturationWeight(saturation_weight) -> None"},

    {NULL,          NULL}
};

static void pyopencv_MergeMertens_specials(void)
{
    pyopencv_MergeMertens_Type.tp_base = &pyopencv_MergeExposures_Type;
    pyopencv_MergeMertens_Type.tp_dealloc = pyopencv_MergeMertens_dealloc;
    pyopencv_MergeMertens_Type.tp_repr = pyopencv_MergeMertens_repr;
    pyopencv_MergeMertens_Type.tp_getset = pyopencv_MergeMertens_getseters;
    pyopencv_MergeMertens_Type.tp_methods = pyopencv_MergeMertens_methods;
}

static PyObject* pyopencv_MergeRobertson_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<MergeRobertson %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_MergeRobertson_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_MergeRobertson_process(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_MergeRobertson_Type))
        return failmsgp("Incorrect type of self (must be 'MergeRobertson' or its derivative)");
    cv::MergeRobertson* _self_ = dynamic_cast<cv::MergeRobertson*>(((pyopencv_MergeRobertson_t*)self)->v.get());
    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:MergeRobertson.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:MergeRobertson.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }
    }

    return NULL;
}



static PyMethodDef pyopencv_MergeRobertson_methods[] =
{
    {"process", (PyCFunction)pyopencv_MergeRobertson_process, METH_VARARGS | METH_KEYWORDS, "process(src, times, response[, dst]) -> dst  or  process(src, times[, dst]) -> dst"},

    {NULL,          NULL}
};

static void pyopencv_MergeRobertson_specials(void)
{
    pyopencv_MergeRobertson_Type.tp_base = &pyopencv_MergeExposures_Type;
    pyopencv_MergeRobertson_Type.tp_dealloc = pyopencv_MergeRobertson_dealloc;
    pyopencv_MergeRobertson_Type.tp_repr = pyopencv_MergeRobertson_repr;
    pyopencv_MergeRobertson_Type.tp_getset = pyopencv_MergeRobertson_getseters;
    pyopencv_MergeRobertson_Type.tp_methods = pyopencv_MergeRobertson_methods;
}

static PyObject* pyopencv_VideoCapture_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<VideoCapture %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_VideoCapture_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_VideoCapture_get(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    int propId=0;
    double retval;

    const char* keywords[] = { "propId", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:VideoCapture.get", (char**)keywords, &propId) )
    {
        ERRWRAP2(retval = _self_->get(propId));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_grab(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->grab());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_isOpened(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_open(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    {
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:VideoCapture.open", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    int device=0;
    bool retval;

    const char* keywords[] = { "device", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:VideoCapture.open", (char**)keywords, &device) )
    {
        ERRWRAP2(retval = _self_->open(device));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_read(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    PyObject* pyobj_image = NULL;
    Mat image;
    bool retval;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:VideoCapture.read", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->read(image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_release(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_retrieve(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    PyObject* pyobj_image = NULL;
    Mat image;
    int flag=0;
    bool retval;

    const char* keywords[] = { "image", "flag", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|Oi:VideoCapture.retrieve", (char**)keywords, &pyobj_image, &flag) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->retrieve(image, flag));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }

    return NULL;
}

static PyObject* pyopencv_VideoCapture_set(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoCapture_Type))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    cv::VideoCapture* _self_ = ((pyopencv_VideoCapture_t*)self)->v.get();
    int propId=0;
    double value=0;
    bool retval;

    const char* keywords[] = { "propId", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "id:VideoCapture.set", (char**)keywords, &propId, &value) )
    {
        ERRWRAP2(retval = _self_->set(propId, value));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_VideoCapture_methods[] =
{
    {"get", (PyCFunction)pyopencv_VideoCapture_get, METH_VARARGS | METH_KEYWORDS, "get(propId) -> retval"},
    {"grab", (PyCFunction)pyopencv_VideoCapture_grab, METH_VARARGS | METH_KEYWORDS, "grab() -> retval"},
    {"isOpened", (PyCFunction)pyopencv_VideoCapture_isOpened, METH_VARARGS | METH_KEYWORDS, "isOpened() -> retval"},
    {"open", (PyCFunction)pyopencv_VideoCapture_open, METH_VARARGS | METH_KEYWORDS, "open(filename) -> retval  or  open(device) -> retval"},
    {"read", (PyCFunction)pyopencv_VideoCapture_read, METH_VARARGS | METH_KEYWORDS, "read([, image]) -> retval, image"},
    {"release", (PyCFunction)pyopencv_VideoCapture_release, METH_VARARGS | METH_KEYWORDS, "release() -> None"},
    {"retrieve", (PyCFunction)pyopencv_VideoCapture_retrieve, METH_VARARGS | METH_KEYWORDS, "retrieve([, image[, flag]]) -> retval, image"},
    {"set", (PyCFunction)pyopencv_VideoCapture_set, METH_VARARGS | METH_KEYWORDS, "set(propId, value) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_VideoCapture_specials(void)
{
    pyopencv_VideoCapture_Type.tp_base = NULL;
    pyopencv_VideoCapture_Type.tp_dealloc = pyopencv_VideoCapture_dealloc;
    pyopencv_VideoCapture_Type.tp_repr = pyopencv_VideoCapture_repr;
    pyopencv_VideoCapture_Type.tp_getset = pyopencv_VideoCapture_getseters;
    pyopencv_VideoCapture_Type.tp_methods = pyopencv_VideoCapture_methods;
}

static PyObject* pyopencv_VideoWriter_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<VideoWriter %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_VideoWriter_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_VideoWriter_isOpened(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    cv::VideoWriter* _self_ = ((pyopencv_VideoWriter_t*)self)->v.get();
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_VideoWriter_open(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    cv::VideoWriter* _self_ = ((pyopencv_VideoWriter_t*)self)->v.get();
    PyObject* pyobj_filename = NULL;
    String filename;
    int fourcc=0;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    bool isColor=true;
    bool retval;

    const char* keywords[] = { "filename", "fourcc", "fps", "frameSize", "isColor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OidO|b:VideoWriter.open", (char**)keywords, &pyobj_filename, &fourcc, &fps, &pyobj_frameSize, &isColor) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, fourcc, fps, frameSize, isColor));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_VideoWriter_release(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    cv::VideoWriter* _self_ = ((pyopencv_VideoWriter_t*)self)->v.get();

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_VideoWriter_write(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_VideoWriter_Type))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    cv::VideoWriter* _self_ = ((pyopencv_VideoWriter_t*)self)->v.get();
    PyObject* pyobj_image = NULL;
    Mat image;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:VideoWriter.write", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->write(image));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_VideoWriter_methods[] =
{
    {"isOpened", (PyCFunction)pyopencv_VideoWriter_isOpened, METH_VARARGS | METH_KEYWORDS, "isOpened() -> retval"},
    {"open", (PyCFunction)pyopencv_VideoWriter_open, METH_VARARGS | METH_KEYWORDS, "open(filename, fourcc, fps, frameSize[, isColor]) -> retval"},
    {"release", (PyCFunction)pyopencv_VideoWriter_release, METH_VARARGS | METH_KEYWORDS, "release() -> None"},
    {"write", (PyCFunction)pyopencv_VideoWriter_write, METH_VARARGS | METH_KEYWORDS, "write(image) -> None"},

    {NULL,          NULL}
};

static void pyopencv_VideoWriter_specials(void)
{
    pyopencv_VideoWriter_Type.tp_base = NULL;
    pyopencv_VideoWriter_Type.tp_dealloc = pyopencv_VideoWriter_dealloc;
    pyopencv_VideoWriter_Type.tp_repr = pyopencv_VideoWriter_repr;
    pyopencv_VideoWriter_Type.tp_getset = pyopencv_VideoWriter_getseters;
    pyopencv_VideoWriter_Type.tp_methods = pyopencv_VideoWriter_methods;
}

static PyObject* pyopencv_CvStatModel_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StatModel %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvStatModel_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvStatModel_load(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvStatModel_Type))
        return failmsgp("Incorrect type of self (must be 'CvStatModel' or its derivative)");
    CvStatModel* _self_ = ((pyopencv_CvStatModel_t*)self)->v.get();
    char* filename=(char*)"";
    char* name=0;

    const char* keywords[] = { "filename", "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "s|s:StatModel.load", (char**)keywords, &filename, &name) )
    {
        ERRWRAP2(_self_->load(filename, name));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvStatModel_save(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvStatModel_Type))
        return failmsgp("Incorrect type of self (must be 'CvStatModel' or its derivative)");
    CvStatModel* _self_ = ((pyopencv_CvStatModel_t*)self)->v.get();
    char* filename=(char*)"";
    char* name=0;

    const char* keywords[] = { "filename", "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "s|s:StatModel.save", (char**)keywords, &filename, &name) )
    {
        ERRWRAP2(_self_->save(filename, name));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_CvStatModel_methods[] =
{
    {"load", (PyCFunction)pyopencv_CvStatModel_load, METH_VARARGS | METH_KEYWORDS, "load(filename[, name]) -> None"},
    {"save", (PyCFunction)pyopencv_CvStatModel_save, METH_VARARGS | METH_KEYWORDS, "save(filename[, name]) -> None"},

    {NULL,          NULL}
};

static void pyopencv_CvStatModel_specials(void)
{
    pyopencv_CvStatModel_Type.tp_base = NULL;
    pyopencv_CvStatModel_Type.tp_dealloc = pyopencv_CvStatModel_dealloc;
    pyopencv_CvStatModel_Type.tp_repr = pyopencv_CvStatModel_repr;
    pyopencv_CvStatModel_Type.tp_getset = pyopencv_CvStatModel_getseters;
    pyopencv_CvStatModel_Type.tp_methods = pyopencv_CvStatModel_methods;
}
static bool pyopencv_to(PyObject* src, CvParamGrid& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"min_val") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"min_val");
        ok = tmp && pyopencv_to(tmp, dst.min_val);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"max_val") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"max_val");
        ok = tmp && pyopencv_to(tmp, dst.max_val);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"step") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"step");
        ok = tmp && pyopencv_to(tmp, dst.step);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

static PyObject* pyopencv_CvNormalBayesClassifier_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<NormalBayesClassifier %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvNormalBayesClassifier_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvNormalBayesClassifier_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvNormalBayesClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CvNormalBayesClassifier' or its derivative)");
    CvNormalBayesClassifier* _self_ = ((pyopencv_CvNormalBayesClassifier_t*)self)->v.get();

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvNormalBayesClassifier_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvNormalBayesClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CvNormalBayesClassifier' or its derivative)");
    CvNormalBayesClassifier* _self_ = ((pyopencv_CvNormalBayesClassifier_t*)self)->v.get();
    PyObject* pyobj_samples = NULL;
    Mat samples;
    Mat results;
    Mat results_prob;
    float retval;

    const char* keywords[] = { "samples", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:NormalBayesClassifier.predict", (char**)keywords, &pyobj_samples) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, &results, &results_prob));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(results), pyopencv_from(results_prob));
    }

    return NULL;
}

static PyObject* pyopencv_CvNormalBayesClassifier_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvNormalBayesClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CvNormalBayesClassifier' or its derivative)");
    CvNormalBayesClassifier* _self_ = ((pyopencv_CvNormalBayesClassifier_t*)self)->v.get();
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    bool update=false;
    bool retval;

    const char* keywords[] = { "trainData", "responses", "varIdx", "sampleIdx", "update", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOb:NormalBayesClassifier.train", (char**)keywords, &pyobj_trainData, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &update) &&
        pyopencv_to(pyobj_trainData, trainData, ArgInfo("trainData", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx, ArgInfo("sampleIdx", 0)) )
    {
        ERRWRAP2(retval = _self_->train(trainData, responses, varIdx, sampleIdx, update));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvNormalBayesClassifier_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvNormalBayesClassifier_clear, METH_VARARGS | METH_KEYWORDS, "clear() -> None"},
    {"predict", (PyCFunction)pyopencv_CvNormalBayesClassifier_predict, METH_VARARGS | METH_KEYWORDS, "predict(samples) -> retval, results, results_prob"},
    {"train", (PyCFunction)pyopencv_CvNormalBayesClassifier_train, METH_VARARGS | METH_KEYWORDS, "train(trainData, responses[, varIdx[, sampleIdx[, update]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvNormalBayesClassifier_specials(void)
{
    pyopencv_CvNormalBayesClassifier_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvNormalBayesClassifier_Type.tp_dealloc = pyopencv_CvNormalBayesClassifier_dealloc;
    pyopencv_CvNormalBayesClassifier_Type.tp_repr = pyopencv_CvNormalBayesClassifier_repr;
    pyopencv_CvNormalBayesClassifier_Type.tp_getset = pyopencv_CvNormalBayesClassifier_getseters;
    pyopencv_CvNormalBayesClassifier_Type.tp_methods = pyopencv_CvNormalBayesClassifier_methods;
}

static PyObject* pyopencv_CvKNearest_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<KNearest %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvKNearest_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvKNearest_find_nearest(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvKNearest_Type))
        return failmsgp("Incorrect type of self (must be 'CvKNearest' or its derivative)");
    CvKNearest* _self_ = ((pyopencv_CvKNearest_t*)self)->v.get();
    PyObject* pyobj_samples = NULL;
    Mat samples;
    int k=0;
    PyObject* pyobj_results = NULL;
    Mat results;
    PyObject* pyobj_neighborResponses = NULL;
    Mat neighborResponses;
    PyObject* pyobj_dists = NULL;
    Mat dists;
    float retval;

    const char* keywords[] = { "samples", "k", "results", "neighborResponses", "dists", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|OOO:KNearest.find_nearest", (char**)keywords, &pyobj_samples, &k, &pyobj_results, &pyobj_neighborResponses, &pyobj_dists) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) &&
        pyopencv_to(pyobj_neighborResponses, neighborResponses, ArgInfo("neighborResponses", 1)) &&
        pyopencv_to(pyobj_dists, dists, ArgInfo("dists", 1)) )
    {
        ERRWRAP2(retval = _self_->find_nearest(samples, k, results, neighborResponses, dists));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(results), pyopencv_from(neighborResponses), pyopencv_from(dists));
    }

    return NULL;
}

static PyObject* pyopencv_CvKNearest_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvKNearest_Type))
        return failmsgp("Incorrect type of self (must be 'CvKNearest' or its derivative)");
    CvKNearest* _self_ = ((pyopencv_CvKNearest_t*)self)->v.get();
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    bool isRegression=false;
    int maxK=32;
    bool updateBase=false;
    bool retval;

    const char* keywords[] = { "trainData", "responses", "sampleIdx", "isRegression", "maxK", "updateBase", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|Obib:KNearest.train", (char**)keywords, &pyobj_trainData, &pyobj_responses, &pyobj_sampleIdx, &isRegression, &maxK, &updateBase) &&
        pyopencv_to(pyobj_trainData, trainData, ArgInfo("trainData", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx, ArgInfo("sampleIdx", 0)) )
    {
        ERRWRAP2(retval = _self_->train(trainData, responses, sampleIdx, isRegression, maxK, updateBase));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvKNearest_methods[] =
{
    {"find_nearest", (PyCFunction)pyopencv_CvKNearest_find_nearest, METH_VARARGS | METH_KEYWORDS, "find_nearest(samples, k[, results[, neighborResponses[, dists]]]) -> retval, results, neighborResponses, dists"},
    {"train", (PyCFunction)pyopencv_CvKNearest_train, METH_VARARGS | METH_KEYWORDS, "train(trainData, responses[, sampleIdx[, isRegression[, maxK[, updateBase]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvKNearest_specials(void)
{
    pyopencv_CvKNearest_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvKNearest_Type.tp_dealloc = pyopencv_CvKNearest_dealloc;
    pyopencv_CvKNearest_Type.tp_repr = pyopencv_CvKNearest_repr;
    pyopencv_CvKNearest_Type.tp_getset = pyopencv_CvKNearest_getseters;
    pyopencv_CvKNearest_Type.tp_methods = pyopencv_CvKNearest_methods;
}
static bool pyopencv_to(PyObject* src, CvSVMParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"svm_type") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"svm_type");
        ok = tmp && pyopencv_to(tmp, dst.svm_type);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"kernel_type") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"kernel_type");
        ok = tmp && pyopencv_to(tmp, dst.kernel_type);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"degree") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"degree");
        ok = tmp && pyopencv_to(tmp, dst.degree);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"gamma") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"gamma");
        ok = tmp && pyopencv_to(tmp, dst.gamma);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"coef0") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"coef0");
        ok = tmp && pyopencv_to(tmp, dst.coef0);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"C") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"C");
        ok = tmp && pyopencv_to(tmp, dst.C);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu");
        ok = tmp && pyopencv_to(tmp, dst.nu);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"p") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"p");
        ok = tmp && pyopencv_to(tmp, dst.p);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"term_crit") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"term_crit");
        ok = tmp && pyopencv_to(tmp, dst.term_crit);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

static PyObject* pyopencv_CvSVM_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<SVM %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvSVM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvSVM_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v.get();

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvSVM_get_support_vector_count(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v.get();
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->get_support_vector_count());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvSVM_get_var_count(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v.get();
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->get_var_count());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvSVM_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v.get();
    PyObject* pyobj_sample = NULL;
    Mat sample;
    bool returnDFVal=false;
    float retval;

    const char* keywords[] = { "sample", "returnDFVal", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|b:SVM.predict", (char**)keywords, &pyobj_sample, &returnDFVal) &&
        pyopencv_to(pyobj_sample, sample, ArgInfo("sample", 0)) )
    {
        ERRWRAP2(retval = _self_->predict(sample, returnDFVal));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvSVM_predict_all(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v.get();
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_results = NULL;
    Mat results;

    const char* keywords[] = { "samples", "results", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:SVM.predict_all", (char**)keywords, &pyobj_samples, &pyobj_results) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(_self_->predict(samples, results));
        return pyopencv_from(results);
    }

    return NULL;
}

static PyObject* pyopencv_CvSVM_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v.get();
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvSVMParams params;
    bool retval;

    const char* keywords[] = { "trainData", "responses", "varIdx", "sampleIdx", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOO:SVM.train", (char**)keywords, &pyobj_trainData, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_params) &&
        pyopencv_to(pyobj_trainData, trainData, ArgInfo("trainData", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx, ArgInfo("sampleIdx", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->train(trainData, responses, varIdx, sampleIdx, params));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvSVM_train_auto(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvSVM_Type))
        return failmsgp("Incorrect type of self (must be 'CvSVM' or its derivative)");
    CvSVM* _self_ = ((pyopencv_CvSVM_t*)self)->v.get();
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx;
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx;
    PyObject* pyobj_params = NULL;
    CvSVMParams params;
    int k_fold=10;
    PyObject* pyobj_Cgrid = NULL;
    CvParamGrid Cgrid=CvSVM::get_default_grid(CvSVM::C);
    PyObject* pyobj_gammaGrid = NULL;
    CvParamGrid gammaGrid=CvSVM::get_default_grid(CvSVM::GAMMA);
    PyObject* pyobj_pGrid = NULL;
    CvParamGrid pGrid=CvSVM::get_default_grid(CvSVM::P);
    PyObject* pyobj_nuGrid = NULL;
    CvParamGrid nuGrid=CvSVM::get_default_grid(CvSVM::NU);
    PyObject* pyobj_coeffGrid = NULL;
    CvParamGrid coeffGrid=CvSVM::get_default_grid(CvSVM::COEF);
    PyObject* pyobj_degreeGrid = NULL;
    CvParamGrid degreeGrid=CvSVM::get_default_grid(CvSVM::DEGREE);
    bool balanced=false;
    bool retval;

    const char* keywords[] = { "trainData", "responses", "varIdx", "sampleIdx", "params", "k_fold", "Cgrid", "gammaGrid", "pGrid", "nuGrid", "coeffGrid", "degreeGrid", "balanced", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOOO|iOOOOOOb:SVM.train_auto", (char**)keywords, &pyobj_trainData, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_params, &k_fold, &pyobj_Cgrid, &pyobj_gammaGrid, &pyobj_pGrid, &pyobj_nuGrid, &pyobj_coeffGrid, &pyobj_degreeGrid, &balanced) &&
        pyopencv_to(pyobj_trainData, trainData, ArgInfo("trainData", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx, ArgInfo("sampleIdx", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) &&
        pyopencv_to(pyobj_Cgrid, Cgrid, ArgInfo("Cgrid", 0)) &&
        pyopencv_to(pyobj_gammaGrid, gammaGrid, ArgInfo("gammaGrid", 0)) &&
        pyopencv_to(pyobj_pGrid, pGrid, ArgInfo("pGrid", 0)) &&
        pyopencv_to(pyobj_nuGrid, nuGrid, ArgInfo("nuGrid", 0)) &&
        pyopencv_to(pyobj_coeffGrid, coeffGrid, ArgInfo("coeffGrid", 0)) &&
        pyopencv_to(pyobj_degreeGrid, degreeGrid, ArgInfo("degreeGrid", 0)) )
    {
        ERRWRAP2(retval = _self_->train_auto(trainData, responses, varIdx, sampleIdx, params, k_fold, Cgrid, gammaGrid, pGrid, nuGrid, coeffGrid, degreeGrid, balanced));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvSVM_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvSVM_clear, METH_VARARGS | METH_KEYWORDS, "clear() -> None"},
    {"get_support_vector_count", (PyCFunction)pyopencv_CvSVM_get_support_vector_count, METH_VARARGS | METH_KEYWORDS, "get_support_vector_count() -> retval"},
    {"get_var_count", (PyCFunction)pyopencv_CvSVM_get_var_count, METH_VARARGS | METH_KEYWORDS, "get_var_count() -> retval"},
    {"predict", (PyCFunction)pyopencv_CvSVM_predict, METH_VARARGS | METH_KEYWORDS, "predict(sample[, returnDFVal]) -> retval"},
    {"predict_all", (PyCFunction)pyopencv_CvSVM_predict_all, METH_VARARGS | METH_KEYWORDS, "predict_all(samples[, results]) -> results"},
    {"train", (PyCFunction)pyopencv_CvSVM_train, METH_VARARGS | METH_KEYWORDS, "train(trainData, responses[, varIdx[, sampleIdx[, params]]]) -> retval"},
    {"train_auto", (PyCFunction)pyopencv_CvSVM_train_auto, METH_VARARGS | METH_KEYWORDS, "train_auto(trainData, responses, varIdx, sampleIdx, params[, k_fold[, Cgrid[, gammaGrid[, pGrid[, nuGrid[, coeffGrid[, degreeGrid[, balanced]]]]]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvSVM_specials(void)
{
    pyopencv_CvSVM_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvSVM_Type.tp_dealloc = pyopencv_CvSVM_dealloc;
    pyopencv_CvSVM_Type.tp_repr = pyopencv_CvSVM_repr;
    pyopencv_CvSVM_Type.tp_getset = pyopencv_CvSVM_getseters;
    pyopencv_CvSVM_Type.tp_methods = pyopencv_CvSVM_methods;
}

static PyObject* pyopencv_EM_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<EM %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_EM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_EM_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_EM_Type))
        return failmsgp("Incorrect type of self (must be 'EM' or its derivative)");
    cv::EM* _self_ = dynamic_cast<cv::EM*>(((pyopencv_EM_t*)self)->v.get());

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_EM_isTrained(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_EM_Type))
        return failmsgp("Incorrect type of self (must be 'EM' or its derivative)");
    cv::EM* _self_ = dynamic_cast<cv::EM*>(((pyopencv_EM_t*)self)->v.get());
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isTrained());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_EM_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_EM_Type))
        return failmsgp("Incorrect type of self (must be 'EM' or its derivative)");
    cv::EM* _self_ = dynamic_cast<cv::EM*>(((pyopencv_EM_t*)self)->v.get());
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_probs = NULL;
    Mat probs;
    Vec2d retval;

    const char* keywords[] = { "sample", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:EM.predict", (char**)keywords, &pyobj_sample, &pyobj_probs) &&
        pyopencv_to(pyobj_sample, sample, ArgInfo("sample", 0)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(sample, probs));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(probs));
    }

    return NULL;
}

static PyObject* pyopencv_EM_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_EM_Type))
        return failmsgp("Incorrect type of self (must be 'EM' or its derivative)");
    cv::EM* _self_ = dynamic_cast<cv::EM*>(((pyopencv_EM_t*)self)->v.get());
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_logLikelihoods = NULL;
    Mat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    Mat labels;
    PyObject* pyobj_probs = NULL;
    Mat probs;
    bool retval;

    const char* keywords[] = { "samples", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOO:EM.train", (char**)keywords, &pyobj_samples, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->train(samples, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }

    return NULL;
}

static PyObject* pyopencv_EM_trainE(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_EM_Type))
        return failmsgp("Incorrect type of self (must be 'EM' or its derivative)");
    cv::EM* _self_ = dynamic_cast<cv::EM*>(((pyopencv_EM_t*)self)->v.get());
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_means0 = NULL;
    Mat means0;
    PyObject* pyobj_covs0 = NULL;
    Mat covs0;
    PyObject* pyobj_weights0 = NULL;
    Mat weights0;
    PyObject* pyobj_logLikelihoods = NULL;
    Mat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    Mat labels;
    PyObject* pyobj_probs = NULL;
    Mat probs;
    bool retval;

    const char* keywords[] = { "samples", "means0", "covs0", "weights0", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOOOO:EM.trainE", (char**)keywords, &pyobj_samples, &pyobj_means0, &pyobj_covs0, &pyobj_weights0, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_means0, means0, ArgInfo("means0", 0)) &&
        pyopencv_to(pyobj_covs0, covs0, ArgInfo("covs0", 0)) &&
        pyopencv_to(pyobj_weights0, weights0, ArgInfo("weights0", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainE(samples, means0, covs0, weights0, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }

    return NULL;
}

static PyObject* pyopencv_EM_trainM(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_EM_Type))
        return failmsgp("Incorrect type of self (must be 'EM' or its derivative)");
    cv::EM* _self_ = dynamic_cast<cv::EM*>(((pyopencv_EM_t*)self)->v.get());
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_probs0 = NULL;
    Mat probs0;
    PyObject* pyobj_logLikelihoods = NULL;
    Mat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    Mat labels;
    PyObject* pyobj_probs = NULL;
    Mat probs;
    bool retval;

    const char* keywords[] = { "samples", "probs0", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOO:EM.trainM", (char**)keywords, &pyobj_samples, &pyobj_probs0, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_probs0, probs0, ArgInfo("probs0", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainM(samples, probs0, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }

    return NULL;
}



static PyMethodDef pyopencv_EM_methods[] =
{
    {"clear", (PyCFunction)pyopencv_EM_clear, METH_VARARGS | METH_KEYWORDS, "clear() -> None"},
    {"isTrained", (PyCFunction)pyopencv_EM_isTrained, METH_VARARGS | METH_KEYWORDS, "isTrained() -> retval"},
    {"predict", (PyCFunction)pyopencv_EM_predict, METH_VARARGS | METH_KEYWORDS, "predict(sample[, probs]) -> retval, probs"},
    {"train", (PyCFunction)pyopencv_EM_train, METH_VARARGS | METH_KEYWORDS, "train(samples[, logLikelihoods[, labels[, probs]]]) -> retval, logLikelihoods, labels, probs"},
    {"trainE", (PyCFunction)pyopencv_EM_trainE, METH_VARARGS | METH_KEYWORDS, "trainE(samples, means0[, covs0[, weights0[, logLikelihoods[, labels[, probs]]]]]) -> retval, logLikelihoods, labels, probs"},
    {"trainM", (PyCFunction)pyopencv_EM_trainM, METH_VARARGS | METH_KEYWORDS, "trainM(samples, probs0[, logLikelihoods[, labels[, probs]]]) -> retval, logLikelihoods, labels, probs"},

    {NULL,          NULL}
};

static void pyopencv_EM_specials(void)
{
    pyopencv_EM_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_EM_Type.tp_dealloc = pyopencv_EM_dealloc;
    pyopencv_EM_Type.tp_repr = pyopencv_EM_repr;
    pyopencv_EM_Type.tp_getset = pyopencv_EM_getseters;
    pyopencv_EM_Type.tp_methods = pyopencv_EM_methods;
}
static bool pyopencv_to(PyObject* src, CvDTreeParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"max_categories") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"max_categories");
        ok = tmp && pyopencv_to(tmp, dst.max_categories);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"max_depth") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"max_depth");
        ok = tmp && pyopencv_to(tmp, dst.max_depth);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"min_sample_count") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"min_sample_count");
        ok = tmp && pyopencv_to(tmp, dst.min_sample_count);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"cv_folds") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"cv_folds");
        ok = tmp && pyopencv_to(tmp, dst.cv_folds);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"use_surrogates") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"use_surrogates");
        ok = tmp && pyopencv_to(tmp, dst.use_surrogates);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"use_1se_rule") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"use_1se_rule");
        ok = tmp && pyopencv_to(tmp, dst.use_1se_rule);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"truncate_pruned_tree") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"truncate_pruned_tree");
        ok = tmp && pyopencv_to(tmp, dst.truncate_pruned_tree);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"regression_accuracy") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"regression_accuracy");
        ok = tmp && pyopencv_to(tmp, dst.regression_accuracy);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

static PyObject* pyopencv_CvDTree_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<DTree %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvDTree_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvDTree_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvDTree_Type))
        return failmsgp("Incorrect type of self (must be 'CvDTree' or its derivative)");
    CvDTree* _self_ = ((pyopencv_CvDTree_t*)self)->v.get();

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvDTree_getVarImportance(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvDTree_Type))
        return failmsgp("Incorrect type of self (must be 'CvDTree' or its derivative)");
    CvDTree* _self_ = ((pyopencv_CvDTree_t*)self)->v.get();
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarImportance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvDTree_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvDTree_Type))
        return failmsgp("Incorrect type of self (must be 'CvDTree' or its derivative)");
    CvDTree* _self_ = ((pyopencv_CvDTree_t*)self)->v.get();
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_missingDataMask = NULL;
    Mat missingDataMask=cv::Mat();
    bool preprocessedInput=false;
    CvDTreeNode* retval;

    const char* keywords[] = { "sample", "missingDataMask", "preprocessedInput", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Ob:DTree.predict", (char**)keywords, &pyobj_sample, &pyobj_missingDataMask, &preprocessedInput) &&
        pyopencv_to(pyobj_sample, sample, ArgInfo("sample", 0)) &&
        pyopencv_to(pyobj_missingDataMask, missingDataMask, ArgInfo("missingDataMask", 0)) )
    {
        ERRWRAP2(retval = _self_->predict(sample, missingDataMask, preprocessedInput));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvDTree_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvDTree_Type))
        return failmsgp("Incorrect type of self (must be 'CvDTree' or its derivative)");
    CvDTree* _self_ = ((pyopencv_CvDTree_t*)self)->v.get();
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    int tflag=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_varType = NULL;
    Mat varType=cv::Mat();
    PyObject* pyobj_missingDataMask = NULL;
    Mat missingDataMask=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvDTreeParams params;
    bool retval;

    const char* keywords[] = { "trainData", "tflag", "responses", "varIdx", "sampleIdx", "varType", "missingDataMask", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|OOOOO:DTree.train", (char**)keywords, &pyobj_trainData, &tflag, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_varType, &pyobj_missingDataMask, &pyobj_params) &&
        pyopencv_to(pyobj_trainData, trainData, ArgInfo("trainData", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx, ArgInfo("sampleIdx", 0)) &&
        pyopencv_to(pyobj_varType, varType, ArgInfo("varType", 0)) &&
        pyopencv_to(pyobj_missingDataMask, missingDataMask, ArgInfo("missingDataMask", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvDTree_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvDTree_clear, METH_VARARGS | METH_KEYWORDS, "clear() -> None"},
    {"getVarImportance", (PyCFunction)pyopencv_CvDTree_getVarImportance, METH_VARARGS | METH_KEYWORDS, "getVarImportance() -> retval"},
    {"predict", (PyCFunction)pyopencv_CvDTree_predict, METH_VARARGS | METH_KEYWORDS, "predict(sample[, missingDataMask[, preprocessedInput]]) -> retval"},
    {"train", (PyCFunction)pyopencv_CvDTree_train, METH_VARARGS | METH_KEYWORDS, "train(trainData, tflag, responses[, varIdx[, sampleIdx[, varType[, missingDataMask[, params]]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvDTree_specials(void)
{
    pyopencv_CvDTree_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvDTree_Type.tp_dealloc = pyopencv_CvDTree_dealloc;
    pyopencv_CvDTree_Type.tp_repr = pyopencv_CvDTree_repr;
    pyopencv_CvDTree_Type.tp_getset = pyopencv_CvDTree_getseters;
    pyopencv_CvDTree_Type.tp_methods = pyopencv_CvDTree_methods;
}
static bool pyopencv_to(PyObject* src, CvRTParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"calc_var_importance") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"calc_var_importance");
        ok = tmp && pyopencv_to(tmp, dst.calc_var_importance);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nactive_vars") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nactive_vars");
        ok = tmp && pyopencv_to(tmp, dst.nactive_vars);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"term_crit") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"term_crit");
        ok = tmp && pyopencv_to(tmp, dst.term_crit);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return pyopencv_to(src, (CvDTreeParams&)dst, name);
}

static PyObject* pyopencv_CvRTrees_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<RTrees %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvRTrees_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvRTrees_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvRTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvRTrees' or its derivative)");
    CvRTrees* _self_ = ((pyopencv_CvRTrees_t*)self)->v.get();

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvRTrees_getVarImportance(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvRTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvRTrees' or its derivative)");
    CvRTrees* _self_ = ((pyopencv_CvRTrees_t*)self)->v.get();
    Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarImportance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvRTrees_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvRTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvRTrees' or its derivative)");
    CvRTrees* _self_ = ((pyopencv_CvRTrees_t*)self)->v.get();
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_missing = NULL;
    Mat missing=cv::Mat();
    float retval;

    const char* keywords[] = { "sample", "missing", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:RTrees.predict", (char**)keywords, &pyobj_sample, &pyobj_missing) &&
        pyopencv_to(pyobj_sample, sample, ArgInfo("sample", 0)) &&
        pyopencv_to(pyobj_missing, missing, ArgInfo("missing", 0)) )
    {
        ERRWRAP2(retval = _self_->predict(sample, missing));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvRTrees_predict_prob(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvRTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvRTrees' or its derivative)");
    CvRTrees* _self_ = ((pyopencv_CvRTrees_t*)self)->v.get();
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_missing = NULL;
    Mat missing=cv::Mat();
    float retval;

    const char* keywords[] = { "sample", "missing", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:RTrees.predict_prob", (char**)keywords, &pyobj_sample, &pyobj_missing) &&
        pyopencv_to(pyobj_sample, sample, ArgInfo("sample", 0)) &&
        pyopencv_to(pyobj_missing, missing, ArgInfo("missing", 0)) )
    {
        ERRWRAP2(retval = _self_->predict_prob(sample, missing));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvRTrees_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvRTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvRTrees' or its derivative)");
    CvRTrees* _self_ = ((pyopencv_CvRTrees_t*)self)->v.get();
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    int tflag=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_varType = NULL;
    Mat varType=cv::Mat();
    PyObject* pyobj_missingDataMask = NULL;
    Mat missingDataMask=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvRTParams params;
    bool retval;

    const char* keywords[] = { "trainData", "tflag", "responses", "varIdx", "sampleIdx", "varType", "missingDataMask", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|OOOOO:RTrees.train", (char**)keywords, &pyobj_trainData, &tflag, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_varType, &pyobj_missingDataMask, &pyobj_params) &&
        pyopencv_to(pyobj_trainData, trainData, ArgInfo("trainData", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx, ArgInfo("sampleIdx", 0)) &&
        pyopencv_to(pyobj_varType, varType, ArgInfo("varType", 0)) &&
        pyopencv_to(pyobj_missingDataMask, missingDataMask, ArgInfo("missingDataMask", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvRTrees_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvRTrees_clear, METH_VARARGS | METH_KEYWORDS, "clear() -> None"},
    {"getVarImportance", (PyCFunction)pyopencv_CvRTrees_getVarImportance, METH_VARARGS | METH_KEYWORDS, "getVarImportance() -> retval"},
    {"predict", (PyCFunction)pyopencv_CvRTrees_predict, METH_VARARGS | METH_KEYWORDS, "predict(sample[, missing]) -> retval"},
    {"predict_prob", (PyCFunction)pyopencv_CvRTrees_predict_prob, METH_VARARGS | METH_KEYWORDS, "predict_prob(sample[, missing]) -> retval"},
    {"train", (PyCFunction)pyopencv_CvRTrees_train, METH_VARARGS | METH_KEYWORDS, "train(trainData, tflag, responses[, varIdx[, sampleIdx[, varType[, missingDataMask[, params]]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvRTrees_specials(void)
{
    pyopencv_CvRTrees_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvRTrees_Type.tp_dealloc = pyopencv_CvRTrees_dealloc;
    pyopencv_CvRTrees_Type.tp_repr = pyopencv_CvRTrees_repr;
    pyopencv_CvRTrees_Type.tp_getset = pyopencv_CvRTrees_getseters;
    pyopencv_CvRTrees_Type.tp_methods = pyopencv_CvRTrees_methods;
}

static PyObject* pyopencv_CvERTrees_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ERTrees %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvERTrees_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvERTrees_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvERTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvERTrees' or its derivative)");
    CvERTrees* _self_ = ((pyopencv_CvERTrees_t*)self)->v.get();
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    int tflag=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_varType = NULL;
    Mat varType=cv::Mat();
    PyObject* pyobj_missingDataMask = NULL;
    Mat missingDataMask=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvRTParams params;
    bool retval;

    const char* keywords[] = { "trainData", "tflag", "responses", "varIdx", "sampleIdx", "varType", "missingDataMask", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|OOOOO:ERTrees.train", (char**)keywords, &pyobj_trainData, &tflag, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_varType, &pyobj_missingDataMask, &pyobj_params) &&
        pyopencv_to(pyobj_trainData, trainData, ArgInfo("trainData", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx, ArgInfo("sampleIdx", 0)) &&
        pyopencv_to(pyobj_varType, varType, ArgInfo("varType", 0)) &&
        pyopencv_to(pyobj_missingDataMask, missingDataMask, ArgInfo("missingDataMask", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvERTrees_methods[] =
{
    {"train", (PyCFunction)pyopencv_CvERTrees_train, METH_VARARGS | METH_KEYWORDS, "train(trainData, tflag, responses[, varIdx[, sampleIdx[, varType[, missingDataMask[, params]]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvERTrees_specials(void)
{
    pyopencv_CvERTrees_Type.tp_base = &pyopencv_CvRTrees_Type;
    pyopencv_CvERTrees_Type.tp_dealloc = pyopencv_CvERTrees_dealloc;
    pyopencv_CvERTrees_Type.tp_repr = pyopencv_CvERTrees_repr;
    pyopencv_CvERTrees_Type.tp_getset = pyopencv_CvERTrees_getseters;
    pyopencv_CvERTrees_Type.tp_methods = pyopencv_CvERTrees_methods;
}
static bool pyopencv_to(PyObject* src, CvBoostParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"boost_type") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"boost_type");
        ok = tmp && pyopencv_to(tmp, dst.boost_type);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"weak_count") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"weak_count");
        ok = tmp && pyopencv_to(tmp, dst.weak_count);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"split_criteria") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"split_criteria");
        ok = tmp && pyopencv_to(tmp, dst.split_criteria);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"weight_trim_rate") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"weight_trim_rate");
        ok = tmp && pyopencv_to(tmp, dst.weight_trim_rate);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return pyopencv_to(src, (CvDTreeParams&)dst, name);
}

static PyObject* pyopencv_CvBoost_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<Boost %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvBoost_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvBoost_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvBoost_Type))
        return failmsgp("Incorrect type of self (must be 'CvBoost' or its derivative)");
    CvBoost* _self_ = ((pyopencv_CvBoost_t*)self)->v.get();

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvBoost_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvBoost_Type))
        return failmsgp("Incorrect type of self (must be 'CvBoost' or its derivative)");
    CvBoost* _self_ = ((pyopencv_CvBoost_t*)self)->v.get();
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_missing = NULL;
    Mat missing=cv::Mat();
    PyObject* pyobj_slice = NULL;
    Range slice=cv::Range::all();
    bool rawMode=false;
    bool returnSum=false;
    float retval;

    const char* keywords[] = { "sample", "missing", "slice", "rawMode", "returnSum", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OObb:Boost.predict", (char**)keywords, &pyobj_sample, &pyobj_missing, &pyobj_slice, &rawMode, &returnSum) &&
        pyopencv_to(pyobj_sample, sample, ArgInfo("sample", 0)) &&
        pyopencv_to(pyobj_missing, missing, ArgInfo("missing", 0)) &&
        pyopencv_to(pyobj_slice, slice, ArgInfo("slice", 0)) )
    {
        ERRWRAP2(retval = _self_->predict(sample, missing, slice, rawMode, returnSum));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvBoost_prune(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvBoost_Type))
        return failmsgp("Incorrect type of self (must be 'CvBoost' or its derivative)");
    CvBoost* _self_ = ((pyopencv_CvBoost_t*)self)->v.get();
    PyObject* pyobj_slice = NULL;
    CvSlice slice;

    const char* keywords[] = { "slice", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Boost.prune", (char**)keywords, &pyobj_slice) &&
        pyopencv_to(pyobj_slice, slice, ArgInfo("slice", 0)) )
    {
        ERRWRAP2(_self_->prune(slice));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvBoost_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvBoost_Type))
        return failmsgp("Incorrect type of self (must be 'CvBoost' or its derivative)");
    CvBoost* _self_ = ((pyopencv_CvBoost_t*)self)->v.get();
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    int tflag=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_varType = NULL;
    Mat varType=cv::Mat();
    PyObject* pyobj_missingDataMask = NULL;
    Mat missingDataMask=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvBoostParams params;
    bool update=false;
    bool retval;

    const char* keywords[] = { "trainData", "tflag", "responses", "varIdx", "sampleIdx", "varType", "missingDataMask", "params", "update", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|OOOOOb:Boost.train", (char**)keywords, &pyobj_trainData, &tflag, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_varType, &pyobj_missingDataMask, &pyobj_params, &update) &&
        pyopencv_to(pyobj_trainData, trainData, ArgInfo("trainData", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx, ArgInfo("sampleIdx", 0)) &&
        pyopencv_to(pyobj_varType, varType, ArgInfo("varType", 0)) &&
        pyopencv_to(pyobj_missingDataMask, missingDataMask, ArgInfo("missingDataMask", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params, update));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvBoost_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvBoost_clear, METH_VARARGS | METH_KEYWORDS, "clear() -> None"},
    {"predict", (PyCFunction)pyopencv_CvBoost_predict, METH_VARARGS | METH_KEYWORDS, "predict(sample[, missing[, slice[, rawMode[, returnSum]]]]) -> retval"},
    {"prune", (PyCFunction)pyopencv_CvBoost_prune, METH_VARARGS | METH_KEYWORDS, "prune(slice) -> None"},
    {"train", (PyCFunction)pyopencv_CvBoost_train, METH_VARARGS | METH_KEYWORDS, "train(trainData, tflag, responses[, varIdx[, sampleIdx[, varType[, missingDataMask[, params[, update]]]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvBoost_specials(void)
{
    pyopencv_CvBoost_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvBoost_Type.tp_dealloc = pyopencv_CvBoost_dealloc;
    pyopencv_CvBoost_Type.tp_repr = pyopencv_CvBoost_repr;
    pyopencv_CvBoost_Type.tp_getset = pyopencv_CvBoost_getseters;
    pyopencv_CvBoost_Type.tp_methods = pyopencv_CvBoost_methods;
}
static bool pyopencv_to(PyObject* src, CvGBTreesParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"weak_count") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"weak_count");
        ok = tmp && pyopencv_to(tmp, dst.weak_count);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"loss_function_type") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"loss_function_type");
        ok = tmp && pyopencv_to(tmp, dst.loss_function_type);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"subsample_portion") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"subsample_portion");
        ok = tmp && pyopencv_to(tmp, dst.subsample_portion);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"shrinkage") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"shrinkage");
        ok = tmp && pyopencv_to(tmp, dst.shrinkage);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return pyopencv_to(src, (CvDTreeParams&)dst, name);
}

static PyObject* pyopencv_CvGBTrees_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<GBTrees %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvGBTrees_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvGBTrees_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvGBTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvGBTrees' or its derivative)");
    CvGBTrees* _self_ = ((pyopencv_CvGBTrees_t*)self)->v.get();

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvGBTrees_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvGBTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvGBTrees' or its derivative)");
    CvGBTrees* _self_ = ((pyopencv_CvGBTrees_t*)self)->v.get();
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_missing = NULL;
    Mat missing=cv::Mat();
    PyObject* pyobj_slice = NULL;
    Range slice=cv::Range::all();
    int k=-1;
    float retval;

    const char* keywords[] = { "sample", "missing", "slice", "k", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOi:GBTrees.predict", (char**)keywords, &pyobj_sample, &pyobj_missing, &pyobj_slice, &k) &&
        pyopencv_to(pyobj_sample, sample, ArgInfo("sample", 0)) &&
        pyopencv_to(pyobj_missing, missing, ArgInfo("missing", 0)) &&
        pyopencv_to(pyobj_slice, slice, ArgInfo("slice", 0)) )
    {
        ERRWRAP2(retval = _self_->predict(sample, missing, slice, k));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CvGBTrees_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvGBTrees_Type))
        return failmsgp("Incorrect type of self (must be 'CvGBTrees' or its derivative)");
    CvGBTrees* _self_ = ((pyopencv_CvGBTrees_t*)self)->v.get();
    PyObject* pyobj_trainData = NULL;
    Mat trainData;
    int tflag=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx=cv::Mat();
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_varType = NULL;
    Mat varType=cv::Mat();
    PyObject* pyobj_missingDataMask = NULL;
    Mat missingDataMask=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvGBTreesParams params;
    bool update=false;
    bool retval;

    const char* keywords[] = { "trainData", "tflag", "responses", "varIdx", "sampleIdx", "varType", "missingDataMask", "params", "update", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|OOOOOb:GBTrees.train", (char**)keywords, &pyobj_trainData, &tflag, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_varType, &pyobj_missingDataMask, &pyobj_params, &update) &&
        pyopencv_to(pyobj_trainData, trainData, ArgInfo("trainData", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx, ArgInfo("sampleIdx", 0)) &&
        pyopencv_to(pyobj_varType, varType, ArgInfo("varType", 0)) &&
        pyopencv_to(pyobj_missingDataMask, missingDataMask, ArgInfo("missingDataMask", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params, update));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvGBTrees_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvGBTrees_clear, METH_VARARGS | METH_KEYWORDS, "clear() -> None"},
    {"predict", (PyCFunction)pyopencv_CvGBTrees_predict, METH_VARARGS | METH_KEYWORDS, "predict(sample[, missing[, slice[, k]]]) -> retval"},
    {"train", (PyCFunction)pyopencv_CvGBTrees_train, METH_VARARGS | METH_KEYWORDS, "train(trainData, tflag, responses[, varIdx[, sampleIdx[, varType[, missingDataMask[, params[, update]]]]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvGBTrees_specials(void)
{
    pyopencv_CvGBTrees_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvGBTrees_Type.tp_dealloc = pyopencv_CvGBTrees_dealloc;
    pyopencv_CvGBTrees_Type.tp_repr = pyopencv_CvGBTrees_repr;
    pyopencv_CvGBTrees_Type.tp_getset = pyopencv_CvGBTrees_getseters;
    pyopencv_CvGBTrees_Type.tp_methods = pyopencv_CvGBTrees_methods;
}
static bool pyopencv_to(PyObject* src, CvANN_MLP_TrainParams& dst, const char* name)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"term_crit") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"term_crit");
        ok = tmp && pyopencv_to(tmp, dst.term_crit);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"train_method") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"train_method");
        ok = tmp && pyopencv_to(tmp, dst.train_method);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"bp_dw_scale") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"bp_dw_scale");
        ok = tmp && pyopencv_to(tmp, dst.bp_dw_scale);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"bp_moment_scale") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"bp_moment_scale");
        ok = tmp && pyopencv_to(tmp, dst.bp_moment_scale);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"rp_dw0") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"rp_dw0");
        ok = tmp && pyopencv_to(tmp, dst.rp_dw0);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"rp_dw_plus") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"rp_dw_plus");
        ok = tmp && pyopencv_to(tmp, dst.rp_dw_plus);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"rp_dw_minus") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"rp_dw_minus");
        ok = tmp && pyopencv_to(tmp, dst.rp_dw_minus);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"rp_dw_min") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"rp_dw_min");
        ok = tmp && pyopencv_to(tmp, dst.rp_dw_min);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"rp_dw_max") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"rp_dw_max");
        ok = tmp && pyopencv_to(tmp, dst.rp_dw_max);
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

static PyObject* pyopencv_CvANN_MLP_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ANN_MLP %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CvANN_MLP_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CvANN_MLP_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvANN_MLP_Type))
        return failmsgp("Incorrect type of self (must be 'CvANN_MLP' or its derivative)");
    CvANN_MLP* _self_ = ((pyopencv_CvANN_MLP_t*)self)->v.get();

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvANN_MLP_create(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvANN_MLP_Type))
        return failmsgp("Incorrect type of self (must be 'CvANN_MLP' or its derivative)");
    CvANN_MLP* _self_ = ((pyopencv_CvANN_MLP_t*)self)->v.get();
    PyObject* pyobj_layerSizes = NULL;
    Mat layerSizes;
    int activateFunc=CvANN_MLP::SIGMOID_SYM;
    double fparam1=0;
    double fparam2=0;

    const char* keywords[] = { "layerSizes", "activateFunc", "fparam1", "fparam2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|idd:ANN_MLP.create", (char**)keywords, &pyobj_layerSizes, &activateFunc, &fparam1, &fparam2) &&
        pyopencv_to(pyobj_layerSizes, layerSizes, ArgInfo("layerSizes", 0)) )
    {
        ERRWRAP2(_self_->create(layerSizes, activateFunc, fparam1, fparam2));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_CvANN_MLP_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvANN_MLP_Type))
        return failmsgp("Incorrect type of self (must be 'CvANN_MLP' or its derivative)");
    CvANN_MLP* _self_ = ((pyopencv_CvANN_MLP_t*)self)->v.get();
    PyObject* pyobj_inputs = NULL;
    Mat inputs;
    PyObject* pyobj_outputs = NULL;
    Mat outputs;
    float retval;

    const char* keywords[] = { "inputs", "outputs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ANN_MLP.predict", (char**)keywords, &pyobj_inputs, &pyobj_outputs) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) &&
        pyopencv_to(pyobj_outputs, outputs, ArgInfo("outputs", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(inputs, outputs));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(outputs));
    }

    return NULL;
}

static PyObject* pyopencv_CvANN_MLP_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CvANN_MLP_Type))
        return failmsgp("Incorrect type of self (must be 'CvANN_MLP' or its derivative)");
    CvANN_MLP* _self_ = ((pyopencv_CvANN_MLP_t*)self)->v.get();
    PyObject* pyobj_inputs = NULL;
    Mat inputs;
    PyObject* pyobj_outputs = NULL;
    Mat outputs;
    PyObject* pyobj_sampleWeights = NULL;
    Mat sampleWeights;
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx=cv::Mat();
    PyObject* pyobj_params = NULL;
    CvANN_MLP_TrainParams params;
    int flags=0;
    int retval;

    const char* keywords[] = { "inputs", "outputs", "sampleWeights", "sampleIdx", "params", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|OOi:ANN_MLP.train", (char**)keywords, &pyobj_inputs, &pyobj_outputs, &pyobj_sampleWeights, &pyobj_sampleIdx, &pyobj_params, &flags) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) &&
        pyopencv_to(pyobj_outputs, outputs, ArgInfo("outputs", 0)) &&
        pyopencv_to(pyobj_sampleWeights, sampleWeights, ArgInfo("sampleWeights", 0)) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx, ArgInfo("sampleIdx", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->train(inputs, outputs, sampleWeights, sampleIdx, params, flags));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CvANN_MLP_methods[] =
{
    {"clear", (PyCFunction)pyopencv_CvANN_MLP_clear, METH_VARARGS | METH_KEYWORDS, "clear() -> None"},
    {"create", (PyCFunction)pyopencv_CvANN_MLP_create, METH_VARARGS | METH_KEYWORDS, "create(layerSizes[, activateFunc[, fparam1[, fparam2]]]) -> None"},
    {"predict", (PyCFunction)pyopencv_CvANN_MLP_predict, METH_VARARGS | METH_KEYWORDS, "predict(inputs[, outputs]) -> retval, outputs"},
    {"train", (PyCFunction)pyopencv_CvANN_MLP_train, METH_VARARGS | METH_KEYWORDS, "train(inputs, outputs, sampleWeights[, sampleIdx[, params[, flags]]]) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CvANN_MLP_specials(void)
{
    pyopencv_CvANN_MLP_Type.tp_base = &pyopencv_CvStatModel_Type;
    pyopencv_CvANN_MLP_Type.tp_dealloc = pyopencv_CvANN_MLP_dealloc;
    pyopencv_CvANN_MLP_Type.tp_repr = pyopencv_CvANN_MLP_repr;
    pyopencv_CvANN_MLP_Type.tp_getset = pyopencv_CvANN_MLP_getseters;
    pyopencv_CvANN_MLP_Type.tp_methods = pyopencv_CvANN_MLP_methods;
}

static PyObject* pyopencv_FeatureDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FeatureDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FeatureDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_FeatureDetector_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FeatureDetector_Type))
        return failmsgp("Incorrect type of self (must be 'FeatureDetector' or its derivative)");
    cv::FeatureDetector* _self_ = dynamic_cast<cv::FeatureDetector*>(((pyopencv_FeatureDetector_t*)self)->v.get());
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_KeyPoint keypoints;
    PyObject* pyobj_mask = NULL;
    Mat mask;

    const char* keywords[] = { "image", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:FeatureDetector.detect", (char**)keywords, &pyobj_image, &pyobj_mask) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->detect(image, keypoints, mask));
        return pyopencv_from(keypoints);
    }

    return NULL;
}

static PyObject* pyopencv_FeatureDetector_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FeatureDetector_Type))
        return failmsgp("Incorrect type of self (must be 'FeatureDetector' or its derivative)");
    cv::FeatureDetector* _self_ = dynamic_cast<cv::FeatureDetector*>(((pyopencv_FeatureDetector_t*)self)->v.get());
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_FeatureDetector_methods[] =
{
    {"detect", (PyCFunction)pyopencv_FeatureDetector_detect, METH_VARARGS | METH_KEYWORDS, "detect(image[, mask]) -> keypoints"},
    {"empty", (PyCFunction)pyopencv_FeatureDetector_empty, METH_VARARGS | METH_KEYWORDS, "empty() -> retval"},

    {NULL,          NULL}
};

static void pyopencv_FeatureDetector_specials(void)
{
    pyopencv_FeatureDetector_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_FeatureDetector_Type.tp_dealloc = pyopencv_FeatureDetector_dealloc;
    pyopencv_FeatureDetector_Type.tp_repr = pyopencv_FeatureDetector_repr;
    pyopencv_FeatureDetector_Type.tp_getset = pyopencv_FeatureDetector_getseters;
    pyopencv_FeatureDetector_Type.tp_methods = pyopencv_FeatureDetector_methods;
}

static PyObject* pyopencv_DescriptorExtractor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<DescriptorExtractor %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_DescriptorExtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_DescriptorExtractor_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_DescriptorExtractor_Type))
        return failmsgp("Incorrect type of self (must be 'DescriptorExtractor' or its derivative)");
    cv::DescriptorExtractor* _self_ = dynamic_cast<cv::DescriptorExtractor*>(((pyopencv_DescriptorExtractor_t*)self)->v.get());
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;

    const char* keywords[] = { "image", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:DescriptorExtractor.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(image, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }

    return NULL;
}

static PyObject* pyopencv_DescriptorExtractor_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_DescriptorExtractor_Type))
        return failmsgp("Incorrect type of self (must be 'DescriptorExtractor' or its derivative)");
    cv::DescriptorExtractor* _self_ = dynamic_cast<cv::DescriptorExtractor*>(((pyopencv_DescriptorExtractor_t*)self)->v.get());
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_DescriptorExtractor_methods[] =
{
    {"compute", (PyCFunction)pyopencv_DescriptorExtractor_compute, METH_VARARGS | METH_KEYWORDS, "compute(image, keypoints[, descriptors]) -> keypoints, descriptors"},
    {"empty", (PyCFunction)pyopencv_DescriptorExtractor_empty, METH_VARARGS | METH_KEYWORDS, "empty() -> retval"},

    {NULL,          NULL}
};

static void pyopencv_DescriptorExtractor_specials(void)
{
    pyopencv_DescriptorExtractor_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_DescriptorExtractor_Type.tp_dealloc = pyopencv_DescriptorExtractor_dealloc;
    pyopencv_DescriptorExtractor_Type.tp_repr = pyopencv_DescriptorExtractor_repr;
    pyopencv_DescriptorExtractor_Type.tp_getset = pyopencv_DescriptorExtractor_getseters;
    pyopencv_DescriptorExtractor_Type.tp_methods = pyopencv_DescriptorExtractor_methods;
}

static PyObject* pyopencv_Feature2D_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<Feature2D %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_Feature2D_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_Feature2D_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Feature2D_Type))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    cv::Feature2D* _self_ = dynamic_cast<cv::Feature2D*>(((pyopencv_Feature2D_t*)self)->v.get());
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;

    const char* keywords[] = { "image", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(image, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }

    return NULL;
}

static PyObject* pyopencv_Feature2D_detectAndCompute(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_Feature2D_Type))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    cv::Feature2D* _self_ = dynamic_cast<cv::Feature2D*>(((pyopencv_Feature2D_t*)self)->v.get());
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    bool useProvidedKeypoints=false;

    const char* keywords[] = { "image", "mask", "descriptors", "useProvidedKeypoints", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|Ob:Feature2D.detectAndCompute", (char**)keywords, &pyobj_image, &pyobj_mask, &pyobj_descriptors, &useProvidedKeypoints) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->operator ()(image, mask, keypoints, descriptors, useProvidedKeypoints));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }

    return NULL;
}



static PyMethodDef pyopencv_Feature2D_methods[] =
{
    {"compute", (PyCFunction)pyopencv_Feature2D_compute, METH_VARARGS | METH_KEYWORDS, "compute(image, keypoints[, descriptors]) -> keypoints, descriptors"},
    {"detectAndCompute", (PyCFunction)pyopencv_Feature2D_detectAndCompute, METH_VARARGS | METH_KEYWORDS, "detectAndCompute(image, mask[, descriptors[, useProvidedKeypoints]]) -> keypoints, descriptors"},

    {NULL,          NULL}
};

static void pyopencv_Feature2D_specials(void)
{
    pyopencv_Feature2D_Type.tp_base = &pyopencv_FeatureDetector_Type;
    pyopencv_Feature2D_Type.tp_dealloc = pyopencv_Feature2D_dealloc;
    pyopencv_Feature2D_Type.tp_repr = pyopencv_Feature2D_repr;
    pyopencv_Feature2D_Type.tp_getset = pyopencv_Feature2D_getseters;
    pyopencv_Feature2D_Type.tp_methods = pyopencv_Feature2D_methods;
}

static PyObject* pyopencv_BRISK_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BRISK %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BRISK_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_BRISK_generateKernel(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_BRISK_Type))
        return failmsgp("Incorrect type of self (must be 'BRISK' or its derivative)");
    cv::BRISK* _self_ = dynamic_cast<cv::BRISK*>(((pyopencv_BRISK_t*)self)->v.get());
    PyObject* pyobj_radiusList = NULL;
    vector_float radiusList;
    PyObject* pyobj_numberList = NULL;
    vector_int numberList;
    float dMax=5.85f;
    float dMin=8.2f;
    PyObject* pyobj_indexChange = NULL;
    vector_int indexChange=std::vector<int>();

    const char* keywords[] = { "radiusList", "numberList", "dMax", "dMin", "indexChange", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|ffO:BRISK.generateKernel", (char**)keywords, &pyobj_radiusList, &pyobj_numberList, &dMax, &dMin, &pyobj_indexChange) &&
        pyopencv_to(pyobj_radiusList, radiusList, ArgInfo("radiusList", 0)) &&
        pyopencv_to(pyobj_numberList, numberList, ArgInfo("numberList", 0)) &&
        pyopencv_to(pyobj_indexChange, indexChange, ArgInfo("indexChange", 0)) )
    {
        ERRWRAP2(_self_->generateKernel(radiusList, numberList, dMax, dMin, indexChange));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_BRISK_methods[] =
{
    {"generateKernel", (PyCFunction)pyopencv_BRISK_generateKernel, METH_VARARGS | METH_KEYWORDS, "generateKernel(radiusList, numberList[, dMax[, dMin[, indexChange]]]) -> None"},

    {NULL,          NULL}
};

static void pyopencv_BRISK_specials(void)
{
    pyopencv_BRISK_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_BRISK_Type.tp_dealloc = pyopencv_BRISK_dealloc;
    pyopencv_BRISK_Type.tp_repr = pyopencv_BRISK_repr;
    pyopencv_BRISK_Type.tp_getset = pyopencv_BRISK_getseters;
    pyopencv_BRISK_Type.tp_methods = pyopencv_BRISK_methods;
}

static PyObject* pyopencv_ORB_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<ORB %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_ORB_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_ORB_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_ORB_specials(void)
{
    pyopencv_ORB_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_ORB_Type.tp_dealloc = pyopencv_ORB_dealloc;
    pyopencv_ORB_Type.tp_repr = pyopencv_ORB_repr;
    pyopencv_ORB_Type.tp_getset = pyopencv_ORB_getseters;
    pyopencv_ORB_Type.tp_methods = pyopencv_ORB_methods;
}

static PyObject* pyopencv_MSER_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<MSER %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_MSER_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_MSER_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_MSER_Type))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    cv::MSER* _self_ = dynamic_cast<cv::MSER*>(((pyopencv_MSER_t*)self)->v.get());
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_vector_Point msers;
    PyObject* pyobj_mask = NULL;
    Mat mask;

    const char* keywords[] = { "image", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:MSER.detect", (char**)keywords, &pyobj_image, &pyobj_mask) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->operator ()(image, msers, mask));
        return pyopencv_from(msers);
    }

    return NULL;
}



static PyMethodDef pyopencv_MSER_methods[] =
{
    {"detect", (PyCFunction)pyopencv_MSER_detect, METH_VARARGS | METH_KEYWORDS, "detect(image[, mask]) -> msers"},

    {NULL,          NULL}
};

static void pyopencv_MSER_specials(void)
{
    pyopencv_MSER_Type.tp_base = &pyopencv_FeatureDetector_Type;
    pyopencv_MSER_Type.tp_dealloc = pyopencv_MSER_dealloc;
    pyopencv_MSER_Type.tp_repr = pyopencv_MSER_repr;
    pyopencv_MSER_Type.tp_getset = pyopencv_MSER_getseters;
    pyopencv_MSER_Type.tp_methods = pyopencv_MSER_methods;
}

static PyObject* pyopencv_StarDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StarDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_StarDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_StarDetector_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StarDetector_Type))
        return failmsgp("Incorrect type of self (must be 'StarDetector' or its derivative)");
    cv::StarDetector* _self_ = dynamic_cast<cv::StarDetector*>(((pyopencv_StarDetector_t*)self)->v.get());
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_KeyPoint keypoints;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:StarDetector.detect", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->operator ()(image, keypoints));
        return pyopencv_from(keypoints);
    }

    return NULL;
}



static PyMethodDef pyopencv_StarDetector_methods[] =
{
    {"detect", (PyCFunction)pyopencv_StarDetector_detect, METH_VARARGS | METH_KEYWORDS, "detect(image) -> keypoints"},

    {NULL,          NULL}
};

static void pyopencv_StarDetector_specials(void)
{
    pyopencv_StarDetector_Type.tp_base = &pyopencv_FeatureDetector_Type;
    pyopencv_StarDetector_Type.tp_dealloc = pyopencv_StarDetector_dealloc;
    pyopencv_StarDetector_Type.tp_repr = pyopencv_StarDetector_repr;
    pyopencv_StarDetector_Type.tp_getset = pyopencv_StarDetector_getseters;
    pyopencv_StarDetector_Type.tp_methods = pyopencv_StarDetector_methods;
}

static PyObject* pyopencv_FastFeatureDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FastFeatureDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FastFeatureDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_FastFeatureDetector_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_FastFeatureDetector_specials(void)
{
    pyopencv_FastFeatureDetector_Type.tp_base = &pyopencv_FeatureDetector_Type;
    pyopencv_FastFeatureDetector_Type.tp_dealloc = pyopencv_FastFeatureDetector_dealloc;
    pyopencv_FastFeatureDetector_Type.tp_repr = pyopencv_FastFeatureDetector_repr;
    pyopencv_FastFeatureDetector_Type.tp_getset = pyopencv_FastFeatureDetector_getseters;
    pyopencv_FastFeatureDetector_Type.tp_methods = pyopencv_FastFeatureDetector_methods;
}

static PyObject* pyopencv_GFTTDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<GFTTDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_GFTTDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_GFTTDetector_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_GFTTDetector_specials(void)
{
    pyopencv_GFTTDetector_Type.tp_base = &pyopencv_FeatureDetector_Type;
    pyopencv_GFTTDetector_Type.tp_dealloc = pyopencv_GFTTDetector_dealloc;
    pyopencv_GFTTDetector_Type.tp_repr = pyopencv_GFTTDetector_repr;
    pyopencv_GFTTDetector_Type.tp_getset = pyopencv_GFTTDetector_getseters;
    pyopencv_GFTTDetector_Type.tp_methods = pyopencv_GFTTDetector_methods;
}

static PyObject* pyopencv_SimpleBlobDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<SimpleBlobDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_SimpleBlobDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_SimpleBlobDetector_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_SimpleBlobDetector_specials(void)
{
    pyopencv_SimpleBlobDetector_Type.tp_base = &pyopencv_FeatureDetector_Type;
    pyopencv_SimpleBlobDetector_Type.tp_dealloc = pyopencv_SimpleBlobDetector_dealloc;
    pyopencv_SimpleBlobDetector_Type.tp_repr = pyopencv_SimpleBlobDetector_repr;
    pyopencv_SimpleBlobDetector_Type.tp_getset = pyopencv_SimpleBlobDetector_getseters;
    pyopencv_SimpleBlobDetector_Type.tp_methods = pyopencv_SimpleBlobDetector_methods;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<SimpleBlobDetector_Params %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_SimpleBlobDetector_Params_get_blobColor(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.blobColor);
}

static int pyopencv_SimpleBlobDetector_Params_set_blobColor(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the blobColor attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.blobColor) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByArea(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByArea);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByArea(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByArea attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByArea) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByCircularity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByCircularity);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByCircularity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByCircularity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByCircularity) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByColor(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByColor);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByColor(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByColor attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByColor) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByConvexity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByConvexity);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByConvexity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByConvexity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByConvexity) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByInertia(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByInertia);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByInertia(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByInertia attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByInertia) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxArea(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxArea);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxArea(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxArea attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxArea) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxCircularity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxCircularity);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxCircularity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxCircularity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxCircularity) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxConvexity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxConvexity);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxConvexity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxConvexity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxConvexity) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxInertiaRatio);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxInertiaRatio attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxInertiaRatio) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxThreshold(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxThreshold);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxThreshold(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxThreshold attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxThreshold) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minArea(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minArea);
}

static int pyopencv_SimpleBlobDetector_Params_set_minArea(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minArea attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minArea) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minCircularity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minCircularity);
}

static int pyopencv_SimpleBlobDetector_Params_set_minCircularity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minCircularity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minCircularity) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minConvexity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minConvexity);
}

static int pyopencv_SimpleBlobDetector_Params_set_minConvexity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minConvexity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minConvexity) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minDistBetweenBlobs(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minDistBetweenBlobs);
}

static int pyopencv_SimpleBlobDetector_Params_set_minDistBetweenBlobs(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minDistBetweenBlobs attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minDistBetweenBlobs) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minInertiaRatio);
}

static int pyopencv_SimpleBlobDetector_Params_set_minInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minInertiaRatio attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minInertiaRatio) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minRepeatability(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minRepeatability);
}

static int pyopencv_SimpleBlobDetector_Params_set_minRepeatability(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minRepeatability attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minRepeatability) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minThreshold(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minThreshold);
}

static int pyopencv_SimpleBlobDetector_Params_set_minThreshold(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minThreshold attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minThreshold) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_thresholdStep(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.thresholdStep);
}

static int pyopencv_SimpleBlobDetector_Params_set_thresholdStep(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the thresholdStep attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.thresholdStep) ? 0 : -1;
}


static PyGetSetDef pyopencv_SimpleBlobDetector_Params_getseters[] =
{
    {(char*)"blobColor", (getter)pyopencv_SimpleBlobDetector_Params_get_blobColor, (setter)pyopencv_SimpleBlobDetector_Params_set_blobColor, (char*)"blobColor", NULL},
    {(char*)"filterByArea", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByArea, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByArea, (char*)"filterByArea", NULL},
    {(char*)"filterByCircularity", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByCircularity, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByCircularity, (char*)"filterByCircularity", NULL},
    {(char*)"filterByColor", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByColor, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByColor, (char*)"filterByColor", NULL},
    {(char*)"filterByConvexity", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByConvexity, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByConvexity, (char*)"filterByConvexity", NULL},
    {(char*)"filterByInertia", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByInertia, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByInertia, (char*)"filterByInertia", NULL},
    {(char*)"maxArea", (getter)pyopencv_SimpleBlobDetector_Params_get_maxArea, (setter)pyopencv_SimpleBlobDetector_Params_set_maxArea, (char*)"maxArea", NULL},
    {(char*)"maxCircularity", (getter)pyopencv_SimpleBlobDetector_Params_get_maxCircularity, (setter)pyopencv_SimpleBlobDetector_Params_set_maxCircularity, (char*)"maxCircularity", NULL},
    {(char*)"maxConvexity", (getter)pyopencv_SimpleBlobDetector_Params_get_maxConvexity, (setter)pyopencv_SimpleBlobDetector_Params_set_maxConvexity, (char*)"maxConvexity", NULL},
    {(char*)"maxInertiaRatio", (getter)pyopencv_SimpleBlobDetector_Params_get_maxInertiaRatio, (setter)pyopencv_SimpleBlobDetector_Params_set_maxInertiaRatio, (char*)"maxInertiaRatio", NULL},
    {(char*)"maxThreshold", (getter)pyopencv_SimpleBlobDetector_Params_get_maxThreshold, (setter)pyopencv_SimpleBlobDetector_Params_set_maxThreshold, (char*)"maxThreshold", NULL},
    {(char*)"minArea", (getter)pyopencv_SimpleBlobDetector_Params_get_minArea, (setter)pyopencv_SimpleBlobDetector_Params_set_minArea, (char*)"minArea", NULL},
    {(char*)"minCircularity", (getter)pyopencv_SimpleBlobDetector_Params_get_minCircularity, (setter)pyopencv_SimpleBlobDetector_Params_set_minCircularity, (char*)"minCircularity", NULL},
    {(char*)"minConvexity", (getter)pyopencv_SimpleBlobDetector_Params_get_minConvexity, (setter)pyopencv_SimpleBlobDetector_Params_set_minConvexity, (char*)"minConvexity", NULL},
    {(char*)"minDistBetweenBlobs", (getter)pyopencv_SimpleBlobDetector_Params_get_minDistBetweenBlobs, (setter)pyopencv_SimpleBlobDetector_Params_set_minDistBetweenBlobs, (char*)"minDistBetweenBlobs", NULL},
    {(char*)"minInertiaRatio", (getter)pyopencv_SimpleBlobDetector_Params_get_minInertiaRatio, (setter)pyopencv_SimpleBlobDetector_Params_set_minInertiaRatio, (char*)"minInertiaRatio", NULL},
    {(char*)"minRepeatability", (getter)pyopencv_SimpleBlobDetector_Params_get_minRepeatability, (setter)pyopencv_SimpleBlobDetector_Params_set_minRepeatability, (char*)"minRepeatability", NULL},
    {(char*)"minThreshold", (getter)pyopencv_SimpleBlobDetector_Params_get_minThreshold, (setter)pyopencv_SimpleBlobDetector_Params_set_minThreshold, (char*)"minThreshold", NULL},
    {(char*)"thresholdStep", (getter)pyopencv_SimpleBlobDetector_Params_get_thresholdStep, (setter)pyopencv_SimpleBlobDetector_Params_set_thresholdStep, (char*)"thresholdStep", NULL},
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_SimpleBlobDetector_Params_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_SimpleBlobDetector_Params_specials(void)
{
    pyopencv_SimpleBlobDetector_Params_Type.tp_base = NULL;
    pyopencv_SimpleBlobDetector_Params_Type.tp_dealloc = pyopencv_SimpleBlobDetector_Params_dealloc;
    pyopencv_SimpleBlobDetector_Params_Type.tp_repr = pyopencv_SimpleBlobDetector_Params_repr;
    pyopencv_SimpleBlobDetector_Params_Type.tp_getset = pyopencv_SimpleBlobDetector_Params_getseters;
    pyopencv_SimpleBlobDetector_Params_Type.tp_methods = pyopencv_SimpleBlobDetector_Params_methods;
}

static PyObject* pyopencv_DenseFeatureDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<DenseFeatureDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_DenseFeatureDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_DenseFeatureDetector_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_DenseFeatureDetector_specials(void)
{
    pyopencv_DenseFeatureDetector_Type.tp_base = &pyopencv_FeatureDetector_Type;
    pyopencv_DenseFeatureDetector_Type.tp_dealloc = pyopencv_DenseFeatureDetector_dealloc;
    pyopencv_DenseFeatureDetector_Type.tp_repr = pyopencv_DenseFeatureDetector_repr;
    pyopencv_DenseFeatureDetector_Type.tp_getset = pyopencv_DenseFeatureDetector_getseters;
    pyopencv_DenseFeatureDetector_Type.tp_methods = pyopencv_DenseFeatureDetector_methods;
}

static PyObject* pyopencv_GridAdaptedFeatureDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<GridAdaptedFeatureDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_GridAdaptedFeatureDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_GridAdaptedFeatureDetector_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_GridAdaptedFeatureDetector_specials(void)
{
    pyopencv_GridAdaptedFeatureDetector_Type.tp_base = &pyopencv_FeatureDetector_Type;
    pyopencv_GridAdaptedFeatureDetector_Type.tp_dealloc = pyopencv_GridAdaptedFeatureDetector_dealloc;
    pyopencv_GridAdaptedFeatureDetector_Type.tp_repr = pyopencv_GridAdaptedFeatureDetector_repr;
    pyopencv_GridAdaptedFeatureDetector_Type.tp_getset = pyopencv_GridAdaptedFeatureDetector_getseters;
    pyopencv_GridAdaptedFeatureDetector_Type.tp_methods = pyopencv_GridAdaptedFeatureDetector_methods;
}

static PyObject* pyopencv_PyramidAdaptedFeatureDetector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<PyramidAdaptedFeatureDetector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_PyramidAdaptedFeatureDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_PyramidAdaptedFeatureDetector_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_PyramidAdaptedFeatureDetector_specials(void)
{
    pyopencv_PyramidAdaptedFeatureDetector_Type.tp_base = &pyopencv_FeatureDetector_Type;
    pyopencv_PyramidAdaptedFeatureDetector_Type.tp_dealloc = pyopencv_PyramidAdaptedFeatureDetector_dealloc;
    pyopencv_PyramidAdaptedFeatureDetector_Type.tp_repr = pyopencv_PyramidAdaptedFeatureDetector_repr;
    pyopencv_PyramidAdaptedFeatureDetector_Type.tp_getset = pyopencv_PyramidAdaptedFeatureDetector_getseters;
    pyopencv_PyramidAdaptedFeatureDetector_Type.tp_methods = pyopencv_PyramidAdaptedFeatureDetector_methods;
}

static PyObject* pyopencv_DescriptorMatcher_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<DescriptorMatcher %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_DescriptorMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_DescriptorMatcher_add(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    cv::DescriptorMatcher* _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    PyObject* pyobj_descriptors = NULL;
    vector_Mat descriptors;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:DescriptorMatcher.add", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(_self_->add(descriptors));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_DescriptorMatcher_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    cv::DescriptorMatcher* _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_DescriptorMatcher_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    cv::DescriptorMatcher* _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_DescriptorMatcher_getTrainDescriptors(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    cv::DescriptorMatcher* _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    vector_Mat retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainDescriptors());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_DescriptorMatcher_knnMatch(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    cv::DescriptorMatcher* _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    Mat trainDescriptors;
    vector_vector_DMatch matches;
    int k=0;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "k", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOi|Ob:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &k, &pyobj_mask, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, trainDescriptors, matches, k, mask, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    vector_vector_DMatch matches;
    int k=0;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "k", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|Ob:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &k, &pyobj_masks, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, matches, k, masks, compactResult));
        return pyopencv_from(matches);
    }
    }

    return NULL;
}

static PyObject* pyopencv_DescriptorMatcher_match(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    cv::DescriptorMatcher* _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());
    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    Mat trainDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_mask = NULL;
    Mat mask;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &pyobj_mask) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, trainDescriptors, matches, mask));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;

    const char* keywords[] = { "queryDescriptors", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_masks) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, matches, masks));
        return pyopencv_from(matches);
    }
    }

    return NULL;
}

static PyObject* pyopencv_DescriptorMatcher_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_DescriptorMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    cv::DescriptorMatcher* _self_ = dynamic_cast<cv::DescriptorMatcher*>(((pyopencv_DescriptorMatcher_t*)self)->v.get());

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->train());
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_DescriptorMatcher_methods[] =
{
    {"add", (PyCFunction)pyopencv_DescriptorMatcher_add, METH_VARARGS | METH_KEYWORDS, "add(descriptors) -> None"},
    {"clear", (PyCFunction)pyopencv_DescriptorMatcher_clear, METH_VARARGS | METH_KEYWORDS, "clear() -> None"},
    {"empty", (PyCFunction)pyopencv_DescriptorMatcher_empty, METH_VARARGS | METH_KEYWORDS, "empty() -> retval"},
    {"getTrainDescriptors", (PyCFunction)pyopencv_DescriptorMatcher_getTrainDescriptors, METH_VARARGS | METH_KEYWORDS, "getTrainDescriptors() -> retval"},
    {"knnMatch", (PyCFunction)pyopencv_DescriptorMatcher_knnMatch, METH_VARARGS | METH_KEYWORDS, "knnMatch(queryDescriptors, trainDescriptors, k[, mask[, compactResult]]) -> matches  or  knnMatch(queryDescriptors, k[, masks[, compactResult]]) -> matches"},
    {"match", (PyCFunction)pyopencv_DescriptorMatcher_match, METH_VARARGS | METH_KEYWORDS, "match(queryDescriptors, trainDescriptors[, mask]) -> matches  or  match(queryDescriptors[, masks]) -> matches"},
    {"train", (PyCFunction)pyopencv_DescriptorMatcher_train, METH_VARARGS | METH_KEYWORDS, "train() -> None"},

    {NULL,          NULL}
};

static void pyopencv_DescriptorMatcher_specials(void)
{
    pyopencv_DescriptorMatcher_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_DescriptorMatcher_Type.tp_dealloc = pyopencv_DescriptorMatcher_dealloc;
    pyopencv_DescriptorMatcher_Type.tp_repr = pyopencv_DescriptorMatcher_repr;
    pyopencv_DescriptorMatcher_Type.tp_getset = pyopencv_DescriptorMatcher_getseters;
    pyopencv_DescriptorMatcher_Type.tp_methods = pyopencv_DescriptorMatcher_methods;
}

static PyObject* pyopencv_BFMatcher_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BFMatcher %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BFMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_BFMatcher_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_BFMatcher_specials(void)
{
    pyopencv_BFMatcher_Type.tp_base = &pyopencv_DescriptorMatcher_Type;
    pyopencv_BFMatcher_Type.tp_dealloc = pyopencv_BFMatcher_dealloc;
    pyopencv_BFMatcher_Type.tp_repr = pyopencv_BFMatcher_repr;
    pyopencv_BFMatcher_Type.tp_getset = pyopencv_BFMatcher_getseters;
    pyopencv_BFMatcher_Type.tp_methods = pyopencv_BFMatcher_methods;
}

static PyObject* pyopencv_FlannBasedMatcher_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FlannBasedMatcher %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FlannBasedMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_FlannBasedMatcher_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_FlannBasedMatcher_specials(void)
{
    pyopencv_FlannBasedMatcher_Type.tp_base = &pyopencv_DescriptorMatcher_Type;
    pyopencv_FlannBasedMatcher_Type.tp_dealloc = pyopencv_FlannBasedMatcher_dealloc;
    pyopencv_FlannBasedMatcher_Type.tp_repr = pyopencv_FlannBasedMatcher_repr;
    pyopencv_FlannBasedMatcher_Type.tp_getset = pyopencv_FlannBasedMatcher_getseters;
    pyopencv_FlannBasedMatcher_Type.tp_methods = pyopencv_FlannBasedMatcher_methods;
}

static PyObject* pyopencv_StereoMatcher_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StereoMatcher %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_StereoMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_StereoMatcher_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    cv::StereoMatcher* _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    PyObject* pyobj_left = NULL;
    Mat left;
    PyObject* pyobj_right = NULL;
    Mat right;
    PyObject* pyobj_disparity = NULL;
    Mat disparity;

    const char* keywords[] = { "left", "right", "disparity", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:StereoMatcher.compute", (char**)keywords, &pyobj_left, &pyobj_right, &pyobj_disparity) &&
        pyopencv_to(pyobj_left, left, ArgInfo("left", 0)) &&
        pyopencv_to(pyobj_right, right, ArgInfo("right", 0)) &&
        pyopencv_to(pyobj_disparity, disparity, ArgInfo("disparity", 1)) )
    {
        ERRWRAP2(_self_->compute(left, right, disparity));
        return pyopencv_from(disparity);
    }

    return NULL;
}

static PyObject* pyopencv_StereoMatcher_setBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    cv::StereoMatcher* _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    int blockSize=0;

    const char* keywords[] = { "blockSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setBlockSize", (char**)keywords, &blockSize) )
    {
        ERRWRAP2(_self_->setBlockSize(blockSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoMatcher_setDisp12MaxDiff(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    cv::StereoMatcher* _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    int disp12MaxDiff=0;

    const char* keywords[] = { "disp12MaxDiff", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setDisp12MaxDiff", (char**)keywords, &disp12MaxDiff) )
    {
        ERRWRAP2(_self_->setDisp12MaxDiff(disp12MaxDiff));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoMatcher_setMinDisparity(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    cv::StereoMatcher* _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    int minDisparity=0;

    const char* keywords[] = { "minDisparity", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setMinDisparity", (char**)keywords, &minDisparity) )
    {
        ERRWRAP2(_self_->setMinDisparity(minDisparity));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoMatcher_setNumDisparities(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    cv::StereoMatcher* _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    int numDisparities=0;

    const char* keywords[] = { "numDisparities", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setNumDisparities", (char**)keywords, &numDisparities) )
    {
        ERRWRAP2(_self_->setNumDisparities(numDisparities));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoMatcher_setSpeckleRange(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    cv::StereoMatcher* _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    int speckleRange=0;

    const char* keywords[] = { "speckleRange", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setSpeckleRange", (char**)keywords, &speckleRange) )
    {
        ERRWRAP2(_self_->setSpeckleRange(speckleRange));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoMatcher_setSpeckleWindowSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoMatcher_Type))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    cv::StereoMatcher* _self_ = dynamic_cast<cv::StereoMatcher*>(((pyopencv_StereoMatcher_t*)self)->v.get());
    int speckleWindowSize=0;

    const char* keywords[] = { "speckleWindowSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setSpeckleWindowSize", (char**)keywords, &speckleWindowSize) )
    {
        ERRWRAP2(_self_->setSpeckleWindowSize(speckleWindowSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_StereoMatcher_methods[] =
{
    {"compute", (PyCFunction)pyopencv_StereoMatcher_compute, METH_VARARGS | METH_KEYWORDS, "compute(left, right[, disparity]) -> disparity"},
    {"setBlockSize", (PyCFunction)pyopencv_StereoMatcher_setBlockSize, METH_VARARGS | METH_KEYWORDS, "setBlockSize(blockSize) -> None"},
    {"setDisp12MaxDiff", (PyCFunction)pyopencv_StereoMatcher_setDisp12MaxDiff, METH_VARARGS | METH_KEYWORDS, "setDisp12MaxDiff(disp12MaxDiff) -> None"},
    {"setMinDisparity", (PyCFunction)pyopencv_StereoMatcher_setMinDisparity, METH_VARARGS | METH_KEYWORDS, "setMinDisparity(minDisparity) -> None"},
    {"setNumDisparities", (PyCFunction)pyopencv_StereoMatcher_setNumDisparities, METH_VARARGS | METH_KEYWORDS, "setNumDisparities(numDisparities) -> None"},
    {"setSpeckleRange", (PyCFunction)pyopencv_StereoMatcher_setSpeckleRange, METH_VARARGS | METH_KEYWORDS, "setSpeckleRange(speckleRange) -> None"},
    {"setSpeckleWindowSize", (PyCFunction)pyopencv_StereoMatcher_setSpeckleWindowSize, METH_VARARGS | METH_KEYWORDS, "setSpeckleWindowSize(speckleWindowSize) -> None"},

    {NULL,          NULL}
};

static void pyopencv_StereoMatcher_specials(void)
{
    pyopencv_StereoMatcher_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_StereoMatcher_Type.tp_dealloc = pyopencv_StereoMatcher_dealloc;
    pyopencv_StereoMatcher_Type.tp_repr = pyopencv_StereoMatcher_repr;
    pyopencv_StereoMatcher_Type.tp_getset = pyopencv_StereoMatcher_getseters;
    pyopencv_StereoMatcher_Type.tp_methods = pyopencv_StereoMatcher_methods;
}

static PyObject* pyopencv_StereoBM_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StereoBM %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_StereoBM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_StereoBM_setPreFilterCap(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    cv::StereoBM* _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    int preFilterCap=0;

    const char* keywords[] = { "preFilterCap", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setPreFilterCap", (char**)keywords, &preFilterCap) )
    {
        ERRWRAP2(_self_->setPreFilterCap(preFilterCap));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoBM_setPreFilterSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    cv::StereoBM* _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    int preFilterSize=0;

    const char* keywords[] = { "preFilterSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setPreFilterSize", (char**)keywords, &preFilterSize) )
    {
        ERRWRAP2(_self_->setPreFilterSize(preFilterSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoBM_setPreFilterType(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    cv::StereoBM* _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    int preFilterType=0;

    const char* keywords[] = { "preFilterType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setPreFilterType", (char**)keywords, &preFilterType) )
    {
        ERRWRAP2(_self_->setPreFilterType(preFilterType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoBM_setROI1(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    cv::StereoBM* _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    PyObject* pyobj_roi1 = NULL;
    Rect roi1;

    const char* keywords[] = { "roi1", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:StereoBM.setROI1", (char**)keywords, &pyobj_roi1) &&
        pyopencv_to(pyobj_roi1, roi1, ArgInfo("roi1", 0)) )
    {
        ERRWRAP2(_self_->setROI1(roi1));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoBM_setROI2(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    cv::StereoBM* _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    PyObject* pyobj_roi2 = NULL;
    Rect roi2;

    const char* keywords[] = { "roi2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:StereoBM.setROI2", (char**)keywords, &pyobj_roi2) &&
        pyopencv_to(pyobj_roi2, roi2, ArgInfo("roi2", 0)) )
    {
        ERRWRAP2(_self_->setROI2(roi2));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoBM_setSmallerBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    cv::StereoBM* _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    int blockSize=0;

    const char* keywords[] = { "blockSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setSmallerBlockSize", (char**)keywords, &blockSize) )
    {
        ERRWRAP2(_self_->setSmallerBlockSize(blockSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoBM_setTextureThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    cv::StereoBM* _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    int textureThreshold=0;

    const char* keywords[] = { "textureThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setTextureThreshold", (char**)keywords, &textureThreshold) )
    {
        ERRWRAP2(_self_->setTextureThreshold(textureThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoBM_setUniquenessRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    cv::StereoBM* _self_ = dynamic_cast<cv::StereoBM*>(((pyopencv_StereoBM_t*)self)->v.get());
    int uniquenessRatio=0;

    const char* keywords[] = { "uniquenessRatio", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setUniquenessRatio", (char**)keywords, &uniquenessRatio) )
    {
        ERRWRAP2(_self_->setUniquenessRatio(uniquenessRatio));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_StereoBM_methods[] =
{
    {"setPreFilterCap", (PyCFunction)pyopencv_StereoBM_setPreFilterCap, METH_VARARGS | METH_KEYWORDS, "setPreFilterCap(preFilterCap) -> None"},
    {"setPreFilterSize", (PyCFunction)pyopencv_StereoBM_setPreFilterSize, METH_VARARGS | METH_KEYWORDS, "setPreFilterSize(preFilterSize) -> None"},
    {"setPreFilterType", (PyCFunction)pyopencv_StereoBM_setPreFilterType, METH_VARARGS | METH_KEYWORDS, "setPreFilterType(preFilterType) -> None"},
    {"setROI1", (PyCFunction)pyopencv_StereoBM_setROI1, METH_VARARGS | METH_KEYWORDS, "setROI1(roi1) -> None"},
    {"setROI2", (PyCFunction)pyopencv_StereoBM_setROI2, METH_VARARGS | METH_KEYWORDS, "setROI2(roi2) -> None"},
    {"setSmallerBlockSize", (PyCFunction)pyopencv_StereoBM_setSmallerBlockSize, METH_VARARGS | METH_KEYWORDS, "setSmallerBlockSize(blockSize) -> None"},
    {"setTextureThreshold", (PyCFunction)pyopencv_StereoBM_setTextureThreshold, METH_VARARGS | METH_KEYWORDS, "setTextureThreshold(textureThreshold) -> None"},
    {"setUniquenessRatio", (PyCFunction)pyopencv_StereoBM_setUniquenessRatio, METH_VARARGS | METH_KEYWORDS, "setUniquenessRatio(uniquenessRatio) -> None"},

    {NULL,          NULL}
};

static void pyopencv_StereoBM_specials(void)
{
    pyopencv_StereoBM_Type.tp_base = &pyopencv_StereoMatcher_Type;
    pyopencv_StereoBM_Type.tp_dealloc = pyopencv_StereoBM_dealloc;
    pyopencv_StereoBM_Type.tp_repr = pyopencv_StereoBM_repr;
    pyopencv_StereoBM_Type.tp_getset = pyopencv_StereoBM_getseters;
    pyopencv_StereoBM_Type.tp_methods = pyopencv_StereoBM_methods;
}

static PyObject* pyopencv_StereoSGBM_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StereoSGBM %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_StereoSGBM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_StereoSGBM_setMode(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    cv::StereoSGBM* _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    int mode=0;

    const char* keywords[] = { "mode", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setMode", (char**)keywords, &mode) )
    {
        ERRWRAP2(_self_->setMode(mode));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoSGBM_setP1(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    cv::StereoSGBM* _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    int P1=0;

    const char* keywords[] = { "P1", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setP1", (char**)keywords, &P1) )
    {
        ERRWRAP2(_self_->setP1(P1));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoSGBM_setP2(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    cv::StereoSGBM* _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    int P2=0;

    const char* keywords[] = { "P2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setP2", (char**)keywords, &P2) )
    {
        ERRWRAP2(_self_->setP2(P2));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoSGBM_setPreFilterCap(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    cv::StereoSGBM* _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    int preFilterCap=0;

    const char* keywords[] = { "preFilterCap", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setPreFilterCap", (char**)keywords, &preFilterCap) )
    {
        ERRWRAP2(_self_->setPreFilterCap(preFilterCap));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_StereoSGBM_setUniquenessRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoSGBM_Type))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    cv::StereoSGBM* _self_ = dynamic_cast<cv::StereoSGBM*>(((pyopencv_StereoSGBM_t*)self)->v.get());
    int uniquenessRatio=0;

    const char* keywords[] = { "uniquenessRatio", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setUniquenessRatio", (char**)keywords, &uniquenessRatio) )
    {
        ERRWRAP2(_self_->setUniquenessRatio(uniquenessRatio));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_StereoSGBM_methods[] =
{
    {"setMode", (PyCFunction)pyopencv_StereoSGBM_setMode, METH_VARARGS | METH_KEYWORDS, "setMode(mode) -> None"},
    {"setP1", (PyCFunction)pyopencv_StereoSGBM_setP1, METH_VARARGS | METH_KEYWORDS, "setP1(P1) -> None"},
    {"setP2", (PyCFunction)pyopencv_StereoSGBM_setP2, METH_VARARGS | METH_KEYWORDS, "setP2(P2) -> None"},
    {"setPreFilterCap", (PyCFunction)pyopencv_StereoSGBM_setPreFilterCap, METH_VARARGS | METH_KEYWORDS, "setPreFilterCap(preFilterCap) -> None"},
    {"setUniquenessRatio", (PyCFunction)pyopencv_StereoSGBM_setUniquenessRatio, METH_VARARGS | METH_KEYWORDS, "setUniquenessRatio(uniquenessRatio) -> None"},

    {NULL,          NULL}
};

static void pyopencv_StereoSGBM_specials(void)
{
    pyopencv_StereoSGBM_Type.tp_base = &pyopencv_StereoMatcher_Type;
    pyopencv_StereoSGBM_Type.tp_dealloc = pyopencv_StereoSGBM_dealloc;
    pyopencv_StereoSGBM_Type.tp_repr = pyopencv_StereoSGBM_repr;
    pyopencv_StereoSGBM_Type.tp_getset = pyopencv_StereoSGBM_getseters;
    pyopencv_StereoSGBM_Type.tp_methods = pyopencv_StereoSGBM_methods;
}

static PyObject* pyopencv_BaseCascadeClassifier_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<BaseCascadeClassifier %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_BaseCascadeClassifier_getseters[] =
{
    {NULL}  /* Sentinel */
};



static PyMethodDef pyopencv_BaseCascadeClassifier_methods[] =
{

    {NULL,          NULL}
};

static void pyopencv_BaseCascadeClassifier_specials(void)
{
    pyopencv_BaseCascadeClassifier_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_BaseCascadeClassifier_Type.tp_dealloc = pyopencv_BaseCascadeClassifier_dealloc;
    pyopencv_BaseCascadeClassifier_Type.tp_repr = pyopencv_BaseCascadeClassifier_repr;
    pyopencv_BaseCascadeClassifier_Type.tp_getset = pyopencv_BaseCascadeClassifier_getseters;
    pyopencv_BaseCascadeClassifier_Type.tp_methods = pyopencv_BaseCascadeClassifier_methods;
}

static PyObject* pyopencv_CascadeClassifier_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<CascadeClassifier %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_CascadeClassifier_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_CascadeClassifier_detectMultiScale(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    cv::CascadeClassifier* _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_Rect objects;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOO:CascadeClassifier.detectMultiScale", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, scaleFactor, minNeighbors, flags, minSize, maxSize));
        return pyopencv_from(objects);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_Rect objects;
    vector_int numDetections;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOO:CascadeClassifier.detectMultiScale", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, numDetections, scaleFactor, minNeighbors, flags, minSize, maxSize));
        return Py_BuildValue("(NN)", pyopencv_from(objects), pyopencv_from(numDetections));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_Rect objects;
    vector_int rejectLevels;
    vector_double levelWeights;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;
    bool outputRejectLevels=false;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", "outputRejectLevels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOOb:CascadeClassifier.detectMultiScale", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize, &outputRejectLevels) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, rejectLevels, levelWeights, scaleFactor, minNeighbors, flags, minSize, maxSize, outputRejectLevels));
        return Py_BuildValue("(NNN)", pyopencv_from(objects), pyopencv_from(rejectLevels), pyopencv_from(levelWeights));
    }
    }

    return NULL;
}

static PyObject* pyopencv_CascadeClassifier_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    cv::CascadeClassifier* _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CascadeClassifier_getFeatureType(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    cv::CascadeClassifier* _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFeatureType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CascadeClassifier_getOriginalWindowSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    cv::CascadeClassifier* _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    Size retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getOriginalWindowSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CascadeClassifier_isOldFormatCascade(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    cv::CascadeClassifier* _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOldFormatCascade());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CascadeClassifier_load(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    cv::CascadeClassifier* _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:CascadeClassifier.load", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->load(filename));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_CascadeClassifier_read(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_CascadeClassifier_Type))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    cv::CascadeClassifier* _self_ = ((pyopencv_CascadeClassifier_t*)self)->v.get();
    PyObject* pyobj_node = NULL;
    FileNode node;
    bool retval;

    const char* keywords[] = { "node", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:CascadeClassifier.read", (char**)keywords, &pyobj_node) &&
        pyopencv_to(pyobj_node, node, ArgInfo("node", 0)) )
    {
        ERRWRAP2(retval = _self_->read(node));
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_CascadeClassifier_methods[] =
{
    {"detectMultiScale", (PyCFunction)pyopencv_CascadeClassifier_detectMultiScale, METH_VARARGS | METH_KEYWORDS, "detectMultiScale(image[, scaleFactor[, minNeighbors[, flags[, minSize[, maxSize]]]]]) -> objects  or  detectMultiScale(image[, scaleFactor[, minNeighbors[, flags[, minSize[, maxSize]]]]]) -> objects, numDetections  or  detectMultiScale(image[, scaleFactor[, minNeighbors[, flags[, minSize[, maxSize[, outputRejectLevels]]]]]]) -> objects, rejectLevels, levelWeights"},
    {"empty", (PyCFunction)pyopencv_CascadeClassifier_empty, METH_VARARGS | METH_KEYWORDS, "empty() -> retval"},
    {"getFeatureType", (PyCFunction)pyopencv_CascadeClassifier_getFeatureType, METH_VARARGS | METH_KEYWORDS, "getFeatureType() -> retval"},
    {"getOriginalWindowSize", (PyCFunction)pyopencv_CascadeClassifier_getOriginalWindowSize, METH_VARARGS | METH_KEYWORDS, "getOriginalWindowSize() -> retval"},
    {"isOldFormatCascade", (PyCFunction)pyopencv_CascadeClassifier_isOldFormatCascade, METH_VARARGS | METH_KEYWORDS, "isOldFormatCascade() -> retval"},
    {"load", (PyCFunction)pyopencv_CascadeClassifier_load, METH_VARARGS | METH_KEYWORDS, "load(filename) -> retval"},
    {"read", (PyCFunction)pyopencv_CascadeClassifier_read, METH_VARARGS | METH_KEYWORDS, "read(node) -> retval"},

    {NULL,          NULL}
};

static void pyopencv_CascadeClassifier_specials(void)
{
    pyopencv_CascadeClassifier_Type.tp_base = NULL;
    pyopencv_CascadeClassifier_Type.tp_dealloc = pyopencv_CascadeClassifier_dealloc;
    pyopencv_CascadeClassifier_Type.tp_repr = pyopencv_CascadeClassifier_repr;
    pyopencv_CascadeClassifier_Type.tp_getset = pyopencv_CascadeClassifier_getseters;
    pyopencv_CascadeClassifier_Type.tp_methods = pyopencv_CascadeClassifier_methods;
}

static PyObject* pyopencv_HOGDescriptor_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<HOGDescriptor %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_HOGDescriptor_get_L2HysThreshold(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->L2HysThreshold);
}

static PyObject* pyopencv_HOGDescriptor_get_blockSize(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->blockSize);
}

static PyObject* pyopencv_HOGDescriptor_get_blockStride(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->blockStride);
}

static PyObject* pyopencv_HOGDescriptor_get_cellSize(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->cellSize);
}

static PyObject* pyopencv_HOGDescriptor_get_derivAperture(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->derivAperture);
}

static PyObject* pyopencv_HOGDescriptor_get_gammaCorrection(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->gammaCorrection);
}

static PyObject* pyopencv_HOGDescriptor_get_histogramNormType(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->histogramNormType);
}

static PyObject* pyopencv_HOGDescriptor_get_nbins(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->nbins);
}

static PyObject* pyopencv_HOGDescriptor_get_nlevels(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->nlevels);
}

static PyObject* pyopencv_HOGDescriptor_get_svmDetector(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->svmDetector);
}

static PyObject* pyopencv_HOGDescriptor_get_winSigma(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->winSigma);
}

static PyObject* pyopencv_HOGDescriptor_get_winSize(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->winSize);
}


static PyGetSetDef pyopencv_HOGDescriptor_getseters[] =
{
    {(char*)"L2HysThreshold", (getter)pyopencv_HOGDescriptor_get_L2HysThreshold, NULL, (char*)"L2HysThreshold", NULL},
    {(char*)"blockSize", (getter)pyopencv_HOGDescriptor_get_blockSize, NULL, (char*)"blockSize", NULL},
    {(char*)"blockStride", (getter)pyopencv_HOGDescriptor_get_blockStride, NULL, (char*)"blockStride", NULL},
    {(char*)"cellSize", (getter)pyopencv_HOGDescriptor_get_cellSize, NULL, (char*)"cellSize", NULL},
    {(char*)"derivAperture", (getter)pyopencv_HOGDescriptor_get_derivAperture, NULL, (char*)"derivAperture", NULL},
    {(char*)"gammaCorrection", (getter)pyopencv_HOGDescriptor_get_gammaCorrection, NULL, (char*)"gammaCorrection", NULL},
    {(char*)"histogramNormType", (getter)pyopencv_HOGDescriptor_get_histogramNormType, NULL, (char*)"histogramNormType", NULL},
    {(char*)"nbins", (getter)pyopencv_HOGDescriptor_get_nbins, NULL, (char*)"nbins", NULL},
    {(char*)"nlevels", (getter)pyopencv_HOGDescriptor_get_nlevels, NULL, (char*)"nlevels", NULL},
    {(char*)"svmDetector", (getter)pyopencv_HOGDescriptor_get_svmDetector, NULL, (char*)"svmDetector", NULL},
    {(char*)"winSigma", (getter)pyopencv_HOGDescriptor_get_winSigma, NULL, (char*)"winSigma", NULL},
    {(char*)"winSize", (getter)pyopencv_HOGDescriptor_get_winSize, NULL, (char*)"winSize", NULL},
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_HOGDescriptor_checkDetectorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    bool retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->checkDetectorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_float descriptors;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_locations = NULL;
    vector_Point locations=std::vector<Point>();

    const char* keywords[] = { "img", "winStride", "padding", "locations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOO:HOGDescriptor.compute", (char**)keywords, &pyobj_img, &pyobj_winStride, &pyobj_padding, &pyobj_locations) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) &&
        pyopencv_to(pyobj_locations, locations, ArgInfo("locations", 0)) )
    {
        ERRWRAP2(_self_->compute(img, descriptors, winStride, padding, locations));
        return pyopencv_from(descriptors);
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_computeGradient(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_grad = NULL;
    Mat grad;
    PyObject* pyobj_angleOfs = NULL;
    Mat angleOfs;
    PyObject* pyobj_paddingTL = NULL;
    Size paddingTL;
    PyObject* pyobj_paddingBR = NULL;
    Size paddingBR;

    const char* keywords[] = { "img", "grad", "angleOfs", "paddingTL", "paddingBR", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOOO:HOGDescriptor.computeGradient", (char**)keywords, &pyobj_img, &pyobj_grad, &pyobj_angleOfs, &pyobj_paddingTL, &pyobj_paddingBR) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_grad, grad, ArgInfo("grad", 1)) &&
        pyopencv_to(pyobj_angleOfs, angleOfs, ArgInfo("angleOfs", 1)) &&
        pyopencv_to(pyobj_paddingTL, paddingTL, ArgInfo("paddingTL", 0)) &&
        pyopencv_to(pyobj_paddingBR, paddingBR, ArgInfo("paddingBR", 0)) )
    {
        ERRWRAP2(_self_->computeGradient(img, grad, angleOfs, paddingTL, paddingBR));
        return Py_BuildValue("(NN)", pyopencv_from(grad), pyopencv_from(angleOfs));
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_Point foundLocations;
    vector_double weights;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_searchLocations = NULL;
    vector_Point searchLocations=std::vector<Point>();

    const char* keywords[] = { "img", "hitThreshold", "winStride", "padding", "searchLocations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|dOOO:HOGDescriptor.detect", (char**)keywords, &pyobj_img, &hitThreshold, &pyobj_winStride, &pyobj_padding, &pyobj_searchLocations) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) &&
        pyopencv_to(pyobj_searchLocations, searchLocations, ArgInfo("searchLocations", 0)) )
    {
        ERRWRAP2(_self_->detect(img, foundLocations, weights, hitThreshold, winStride, padding, searchLocations));
        return Py_BuildValue("(NN)", pyopencv_from(foundLocations), pyopencv_from(weights));
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_detectMultiScale(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_Rect foundLocations;
    vector_double foundWeights;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    double scale=1.05;
    double finalThreshold=2.0;
    bool useMeanshiftGrouping=false;

    const char* keywords[] = { "img", "hitThreshold", "winStride", "padding", "scale", "finalThreshold", "useMeanshiftGrouping", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|dOOddb:HOGDescriptor.detectMultiScale", (char**)keywords, &pyobj_img, &hitThreshold, &pyobj_winStride, &pyobj_padding, &scale, &finalThreshold, &useMeanshiftGrouping) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(img, foundLocations, foundWeights, hitThreshold, winStride, padding, scale, finalThreshold, useMeanshiftGrouping));
        return Py_BuildValue("(NN)", pyopencv_from(foundLocations), pyopencv_from(foundWeights));
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_getDescriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    size_t retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_getWinSigma(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    double retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWinSigma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_load(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_objname = NULL;
    String objname;
    bool retval;

    const char* keywords[] = { "filename", "objname", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:HOGDescriptor.load", (char**)keywords, &pyobj_filename, &pyobj_objname) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_objname, objname, ArgInfo("objname", 0)) )
    {
        ERRWRAP2(retval = _self_->load(filename, objname));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_save(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_objname = NULL;
    String objname;

    const char* keywords[] = { "filename", "objname", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:HOGDescriptor.save", (char**)keywords, &pyobj_filename, &pyobj_objname) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_objname, objname, ArgInfo("objname", 0)) )
    {
        ERRWRAP2(_self_->save(filename, objname));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_HOGDescriptor_setSVMDetector(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_HOGDescriptor_Type))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    cv::HOGDescriptor* _self_ = ((pyopencv_HOGDescriptor_t*)self)->v.get();
    PyObject* pyobj__svmdetector = NULL;
    Mat _svmdetector;

    const char* keywords[] = { "_svmdetector", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:HOGDescriptor.setSVMDetector", (char**)keywords, &pyobj__svmdetector) &&
        pyopencv_to(pyobj__svmdetector, _svmdetector, ArgInfo("_svmdetector", 0)) )
    {
        ERRWRAP2(_self_->setSVMDetector(_svmdetector));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_HOGDescriptor_methods[] =
{
    {"checkDetectorSize", (PyCFunction)pyopencv_HOGDescriptor_checkDetectorSize, METH_VARARGS | METH_KEYWORDS, "checkDetectorSize() -> retval"},
    {"compute", (PyCFunction)pyopencv_HOGDescriptor_compute, METH_VARARGS | METH_KEYWORDS, "compute(img[, winStride[, padding[, locations]]]) -> descriptors"},
    {"computeGradient", (PyCFunction)pyopencv_HOGDescriptor_computeGradient, METH_VARARGS | METH_KEYWORDS, "computeGradient(img[, grad[, angleOfs[, paddingTL[, paddingBR]]]]) -> grad, angleOfs"},
    {"detect", (PyCFunction)pyopencv_HOGDescriptor_detect, METH_VARARGS | METH_KEYWORDS, "detect(img[, hitThreshold[, winStride[, padding[, searchLocations]]]]) -> foundLocations, weights"},
    {"detectMultiScale", (PyCFunction)pyopencv_HOGDescriptor_detectMultiScale, METH_VARARGS | METH_KEYWORDS, "detectMultiScale(img[, hitThreshold[, winStride[, padding[, scale[, finalThreshold[, useMeanshiftGrouping]]]]]]) -> foundLocations, foundWeights"},
    {"getDescriptorSize", (PyCFunction)pyopencv_HOGDescriptor_getDescriptorSize, METH_VARARGS | METH_KEYWORDS, "getDescriptorSize() -> retval"},
    {"getWinSigma", (PyCFunction)pyopencv_HOGDescriptor_getWinSigma, METH_VARARGS | METH_KEYWORDS, "getWinSigma() -> retval"},
    {"load", (PyCFunction)pyopencv_HOGDescriptor_load, METH_VARARGS | METH_KEYWORDS, "load(filename[, objname]) -> retval"},
    {"save", (PyCFunction)pyopencv_HOGDescriptor_save, METH_VARARGS | METH_KEYWORDS, "save(filename[, objname]) -> None"},
    {"setSVMDetector", (PyCFunction)pyopencv_HOGDescriptor_setSVMDetector, METH_VARARGS | METH_KEYWORDS, "setSVMDetector(_svmdetector) -> None"},

    {NULL,          NULL}
};

static void pyopencv_HOGDescriptor_specials(void)
{
    pyopencv_HOGDescriptor_Type.tp_base = NULL;
    pyopencv_HOGDescriptor_Type.tp_dealloc = pyopencv_HOGDescriptor_dealloc;
    pyopencv_HOGDescriptor_Type.tp_repr = pyopencv_HOGDescriptor_repr;
    pyopencv_HOGDescriptor_Type.tp_getset = pyopencv_HOGDescriptor_getseters;
    pyopencv_HOGDescriptor_Type.tp_methods = pyopencv_HOGDescriptor_methods;
}

static PyObject* pyopencv_softcascade_ChannelFeatureBuilder_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<softcascade_ChannelFeatureBuilder %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_softcascade_ChannelFeatureBuilder_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_softcascade_ChannelFeatureBuilder_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_softcascade_ChannelFeatureBuilder_Type))
        return failmsgp("Incorrect type of self (must be 'softcascade_ChannelFeatureBuilder' or its derivative)");
    cv::softcascade::ChannelFeatureBuilder* _self_ = dynamic_cast<cv::softcascade::ChannelFeatureBuilder*>(((pyopencv_softcascade_ChannelFeatureBuilder_t*)self)->v.get());
    PyObject* pyobj_src = NULL;
    Mat src;
    PyObject* pyobj_channels = NULL;
    Mat channels;
    PyObject* pyobj_channelsSize = NULL;
    Size channelsSize=cv::Size();

    const char* keywords[] = { "src", "channels", "channelsSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OO:softcascade_ChannelFeatureBuilder.compute", (char**)keywords, &pyobj_src, &pyobj_channels, &pyobj_channelsSize) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_channels, channels, ArgInfo("channels", 1)) &&
        pyopencv_to(pyobj_channelsSize, channelsSize, ArgInfo("channelsSize", 0)) )
    {
        ERRWRAP2(_self_->operator ()(src, channels, channelsSize));
        return pyopencv_from(channels);
    }

    return NULL;
}



static PyMethodDef pyopencv_softcascade_ChannelFeatureBuilder_methods[] =
{
    {"compute", (PyCFunction)pyopencv_softcascade_ChannelFeatureBuilder_compute, METH_VARARGS | METH_KEYWORDS, "compute(src[, channels[, channelsSize]]) -> channels"},

    {NULL,          NULL}
};

static void pyopencv_softcascade_ChannelFeatureBuilder_specials(void)
{
    pyopencv_softcascade_ChannelFeatureBuilder_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_softcascade_ChannelFeatureBuilder_Type.tp_dealloc = pyopencv_softcascade_ChannelFeatureBuilder_dealloc;
    pyopencv_softcascade_ChannelFeatureBuilder_Type.tp_repr = pyopencv_softcascade_ChannelFeatureBuilder_repr;
    pyopencv_softcascade_ChannelFeatureBuilder_Type.tp_getset = pyopencv_softcascade_ChannelFeatureBuilder_getseters;
    pyopencv_softcascade_ChannelFeatureBuilder_Type.tp_methods = pyopencv_softcascade_ChannelFeatureBuilder_methods;
}

static PyObject* pyopencv_softcascade_Detector_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<softcascade_Detector %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_softcascade_Detector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_softcascade_Detector_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_softcascade_Detector_Type))
        return failmsgp("Incorrect type of self (must be 'softcascade_Detector' or its derivative)");
    cv::softcascade::Detector* _self_ = dynamic_cast<cv::softcascade::Detector*>(((pyopencv_softcascade_Detector_t*)self)->v.get());
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_rois = NULL;
    Mat rois;
    PyObject* pyobj_rects = NULL;
    Mat rects;
    PyObject* pyobj_confs = NULL;
    Mat confs;

    const char* keywords[] = { "image", "rois", "rects", "confs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OO:softcascade_Detector.detect", (char**)keywords, &pyobj_image, &pyobj_rois, &pyobj_rects, &pyobj_confs) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_rois, rois, ArgInfo("rois", 0)) &&
        pyopencv_to(pyobj_rects, rects, ArgInfo("rects", 1)) &&
        pyopencv_to(pyobj_confs, confs, ArgInfo("confs", 1)) )
    {
        ERRWRAP2(_self_->detect(image, rois, rects, confs));
        return Py_BuildValue("(NN)", pyopencv_from(rects), pyopencv_from(confs));
    }

    return NULL;
}

static PyObject* pyopencv_softcascade_Detector_load(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_softcascade_Detector_Type))
        return failmsgp("Incorrect type of self (must be 'softcascade_Detector' or its derivative)");
    cv::softcascade::Detector* _self_ = dynamic_cast<cv::softcascade::Detector*>(((pyopencv_softcascade_Detector_t*)self)->v.get());
    PyObject* pyobj_fileNode = NULL;
    FileNode fileNode;
    bool retval;

    const char* keywords[] = { "fileNode", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:softcascade_Detector.load", (char**)keywords, &pyobj_fileNode) &&
        pyopencv_to(pyobj_fileNode, fileNode, ArgInfo("fileNode", 0)) )
    {
        ERRWRAP2(retval = _self_->load(fileNode));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_softcascade_Detector_read(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_softcascade_Detector_Type))
        return failmsgp("Incorrect type of self (must be 'softcascade_Detector' or its derivative)");
    cv::softcascade::Detector* _self_ = dynamic_cast<cv::softcascade::Detector*>(((pyopencv_softcascade_Detector_t*)self)->v.get());
    PyObject* pyobj_fileNode = NULL;
    FileNode fileNode;

    const char* keywords[] = { "fileNode", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:softcascade_Detector.read", (char**)keywords, &pyobj_fileNode) &&
        pyopencv_to(pyobj_fileNode, fileNode, ArgInfo("fileNode", 0)) )
    {
        ERRWRAP2(_self_->read(fileNode));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_softcascade_Detector_methods[] =
{
    {"detect", (PyCFunction)pyopencv_softcascade_Detector_detect, METH_VARARGS | METH_KEYWORDS, "detect(image, rois[, rects[, confs]]) -> rects, confs"},
    {"load", (PyCFunction)pyopencv_softcascade_Detector_load, METH_VARARGS | METH_KEYWORDS, "load(fileNode) -> retval"},
    {"read", (PyCFunction)pyopencv_softcascade_Detector_read, METH_VARARGS | METH_KEYWORDS, "read(fileNode) -> None"},

    {NULL,          NULL}
};

static void pyopencv_softcascade_Detector_specials(void)
{
    pyopencv_softcascade_Detector_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_softcascade_Detector_Type.tp_dealloc = pyopencv_softcascade_Detector_dealloc;
    pyopencv_softcascade_Detector_Type.tp_repr = pyopencv_softcascade_Detector_repr;
    pyopencv_softcascade_Detector_Type.tp_getset = pyopencv_softcascade_Detector_getseters;
    pyopencv_softcascade_Detector_Type.tp_methods = pyopencv_softcascade_Detector_methods;
}

static PyObject* pyopencv_StereoVar_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<StereoVar %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_StereoVar_get_cycle(pyopencv_StereoVar_t* p, void *closure)
{
    return pyopencv_from(p->v->cycle);
}

static int pyopencv_StereoVar_set_cycle(pyopencv_StereoVar_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the cycle attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->cycle) ? 0 : -1;
}

static PyObject* pyopencv_StereoVar_get_fi(pyopencv_StereoVar_t* p, void *closure)
{
    return pyopencv_from(p->v->fi);
}

static int pyopencv_StereoVar_set_fi(pyopencv_StereoVar_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the fi attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->fi) ? 0 : -1;
}

static PyObject* pyopencv_StereoVar_get_flags(pyopencv_StereoVar_t* p, void *closure)
{
    return pyopencv_from(p->v->flags);
}

static int pyopencv_StereoVar_set_flags(pyopencv_StereoVar_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the flags attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->flags) ? 0 : -1;
}

static PyObject* pyopencv_StereoVar_get_lambda(pyopencv_StereoVar_t* p, void *closure)
{
    return pyopencv_from(p->v->lambda);
}

static int pyopencv_StereoVar_set_lambda(pyopencv_StereoVar_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the lambda attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->lambda) ? 0 : -1;
}

static PyObject* pyopencv_StereoVar_get_levels(pyopencv_StereoVar_t* p, void *closure)
{
    return pyopencv_from(p->v->levels);
}

static int pyopencv_StereoVar_set_levels(pyopencv_StereoVar_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the levels attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->levels) ? 0 : -1;
}

static PyObject* pyopencv_StereoVar_get_maxDisp(pyopencv_StereoVar_t* p, void *closure)
{
    return pyopencv_from(p->v->maxDisp);
}

static int pyopencv_StereoVar_set_maxDisp(pyopencv_StereoVar_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxDisp attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->maxDisp) ? 0 : -1;
}

static PyObject* pyopencv_StereoVar_get_minDisp(pyopencv_StereoVar_t* p, void *closure)
{
    return pyopencv_from(p->v->minDisp);
}

static int pyopencv_StereoVar_set_minDisp(pyopencv_StereoVar_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minDisp attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->minDisp) ? 0 : -1;
}

static PyObject* pyopencv_StereoVar_get_nIt(pyopencv_StereoVar_t* p, void *closure)
{
    return pyopencv_from(p->v->nIt);
}

static int pyopencv_StereoVar_set_nIt(pyopencv_StereoVar_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the nIt attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->nIt) ? 0 : -1;
}

static PyObject* pyopencv_StereoVar_get_penalization(pyopencv_StereoVar_t* p, void *closure)
{
    return pyopencv_from(p->v->penalization);
}

static int pyopencv_StereoVar_set_penalization(pyopencv_StereoVar_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the penalization attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->penalization) ? 0 : -1;
}

static PyObject* pyopencv_StereoVar_get_poly_n(pyopencv_StereoVar_t* p, void *closure)
{
    return pyopencv_from(p->v->poly_n);
}

static int pyopencv_StereoVar_set_poly_n(pyopencv_StereoVar_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the poly_n attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->poly_n) ? 0 : -1;
}

static PyObject* pyopencv_StereoVar_get_poly_sigma(pyopencv_StereoVar_t* p, void *closure)
{
    return pyopencv_from(p->v->poly_sigma);
}

static int pyopencv_StereoVar_set_poly_sigma(pyopencv_StereoVar_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the poly_sigma attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->poly_sigma) ? 0 : -1;
}

static PyObject* pyopencv_StereoVar_get_pyrScale(pyopencv_StereoVar_t* p, void *closure)
{
    return pyopencv_from(p->v->pyrScale);
}

static int pyopencv_StereoVar_set_pyrScale(pyopencv_StereoVar_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the pyrScale attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->pyrScale) ? 0 : -1;
}


static PyGetSetDef pyopencv_StereoVar_getseters[] =
{
    {(char*)"cycle", (getter)pyopencv_StereoVar_get_cycle, (setter)pyopencv_StereoVar_set_cycle, (char*)"cycle", NULL},
    {(char*)"fi", (getter)pyopencv_StereoVar_get_fi, (setter)pyopencv_StereoVar_set_fi, (char*)"fi", NULL},
    {(char*)"flags", (getter)pyopencv_StereoVar_get_flags, (setter)pyopencv_StereoVar_set_flags, (char*)"flags", NULL},
    {(char*)"lambda", (getter)pyopencv_StereoVar_get_lambda, (setter)pyopencv_StereoVar_set_lambda, (char*)"lambda", NULL},
    {(char*)"levels", (getter)pyopencv_StereoVar_get_levels, (setter)pyopencv_StereoVar_set_levels, (char*)"levels", NULL},
    {(char*)"maxDisp", (getter)pyopencv_StereoVar_get_maxDisp, (setter)pyopencv_StereoVar_set_maxDisp, (char*)"maxDisp", NULL},
    {(char*)"minDisp", (getter)pyopencv_StereoVar_get_minDisp, (setter)pyopencv_StereoVar_set_minDisp, (char*)"minDisp", NULL},
    {(char*)"nIt", (getter)pyopencv_StereoVar_get_nIt, (setter)pyopencv_StereoVar_set_nIt, (char*)"nIt", NULL},
    {(char*)"penalization", (getter)pyopencv_StereoVar_get_penalization, (setter)pyopencv_StereoVar_set_penalization, (char*)"penalization", NULL},
    {(char*)"poly_n", (getter)pyopencv_StereoVar_get_poly_n, (setter)pyopencv_StereoVar_set_poly_n, (char*)"poly_n", NULL},
    {(char*)"poly_sigma", (getter)pyopencv_StereoVar_get_poly_sigma, (setter)pyopencv_StereoVar_set_poly_sigma, (char*)"poly_sigma", NULL},
    {(char*)"pyrScale", (getter)pyopencv_StereoVar_get_pyrScale, (setter)pyopencv_StereoVar_set_pyrScale, (char*)"pyrScale", NULL},
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_StereoVar_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_StereoVar_Type))
        return failmsgp("Incorrect type of self (must be 'StereoVar' or its derivative)");
    cv::StereoVar* _self_ = ((pyopencv_StereoVar_t*)self)->v.get();
    PyObject* pyobj_left = NULL;
    Mat left;
    PyObject* pyobj_right = NULL;
    Mat right;
    PyObject* pyobj_disp = NULL;
    Mat disp;

    const char* keywords[] = { "left", "right", "disp", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:StereoVar.compute", (char**)keywords, &pyobj_left, &pyobj_right, &pyobj_disp) &&
        pyopencv_to(pyobj_left, left, ArgInfo("left", 0)) &&
        pyopencv_to(pyobj_right, right, ArgInfo("right", 0)) &&
        pyopencv_to(pyobj_disp, disp, ArgInfo("disp", 1)) )
    {
        ERRWRAP2(_self_->operator ()(left, right, disp));
        return pyopencv_from(disp);
    }

    return NULL;
}



static PyMethodDef pyopencv_StereoVar_methods[] =
{
    {"compute", (PyCFunction)pyopencv_StereoVar_compute, METH_VARARGS | METH_KEYWORDS, "compute(left, right[, disp]) -> disp"},

    {NULL,          NULL}
};

static void pyopencv_StereoVar_specials(void)
{
    pyopencv_StereoVar_Type.tp_base = NULL;
    pyopencv_StereoVar_Type.tp_dealloc = pyopencv_StereoVar_dealloc;
    pyopencv_StereoVar_Type.tp_repr = pyopencv_StereoVar_repr;
    pyopencv_StereoVar_Type.tp_getset = pyopencv_StereoVar_getseters;
    pyopencv_StereoVar_Type.tp_methods = pyopencv_StereoVar_methods;
}

static PyObject* pyopencv_FaceRecognizer_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<FaceRecognizer %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_FaceRecognizer_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_FaceRecognizer_load(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FaceRecognizer_Type))
        return failmsgp("Incorrect type of self (must be 'FaceRecognizer' or its derivative)");
    cv::FaceRecognizer* _self_ = dynamic_cast<cv::FaceRecognizer*>(((pyopencv_FaceRecognizer_t*)self)->v.get());
    PyObject* pyobj_filename = NULL;
    String filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:FaceRecognizer.load", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(_self_->load(filename));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_FaceRecognizer_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FaceRecognizer_Type))
        return failmsgp("Incorrect type of self (must be 'FaceRecognizer' or its derivative)");
    cv::FaceRecognizer* _self_ = dynamic_cast<cv::FaceRecognizer*>(((pyopencv_FaceRecognizer_t*)self)->v.get());
    PyObject* pyobj_src = NULL;
    Mat src;
    int label;
    double confidence;

    const char* keywords[] = { "src", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:FaceRecognizer.predict", (char**)keywords, &pyobj_src) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) )
    {
        ERRWRAP2(_self_->predict(src, label, confidence));
        return Py_BuildValue("(NN)", pyopencv_from(label), pyopencv_from(confidence));
    }

    return NULL;
}

static PyObject* pyopencv_FaceRecognizer_save(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FaceRecognizer_Type))
        return failmsgp("Incorrect type of self (must be 'FaceRecognizer' or its derivative)");
    cv::FaceRecognizer* _self_ = dynamic_cast<cv::FaceRecognizer*>(((pyopencv_FaceRecognizer_t*)self)->v.get());
    PyObject* pyobj_filename = NULL;
    String filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:FaceRecognizer.save", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(_self_->save(filename));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_FaceRecognizer_train(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FaceRecognizer_Type))
        return failmsgp("Incorrect type of self (must be 'FaceRecognizer' or its derivative)");
    cv::FaceRecognizer* _self_ = dynamic_cast<cv::FaceRecognizer*>(((pyopencv_FaceRecognizer_t*)self)->v.get());
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_labels = NULL;
    Mat labels;

    const char* keywords[] = { "src", "labels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:FaceRecognizer.train", (char**)keywords, &pyobj_src, &pyobj_labels) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 0)) )
    {
        ERRWRAP2(_self_->train(src, labels));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_FaceRecognizer_update(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_FaceRecognizer_Type))
        return failmsgp("Incorrect type of self (must be 'FaceRecognizer' or its derivative)");
    cv::FaceRecognizer* _self_ = dynamic_cast<cv::FaceRecognizer*>(((pyopencv_FaceRecognizer_t*)self)->v.get());
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_labels = NULL;
    Mat labels;

    const char* keywords[] = { "src", "labels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:FaceRecognizer.update", (char**)keywords, &pyobj_src, &pyobj_labels) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 0)) )
    {
        ERRWRAP2(_self_->update(src, labels));
        Py_RETURN_NONE;
    }

    return NULL;
}



static PyMethodDef pyopencv_FaceRecognizer_methods[] =
{
    {"load", (PyCFunction)pyopencv_FaceRecognizer_load, METH_VARARGS | METH_KEYWORDS, "load(filename) -> None"},
    {"predict", (PyCFunction)pyopencv_FaceRecognizer_predict, METH_VARARGS | METH_KEYWORDS, "predict(src) -> label, confidence"},
    {"save", (PyCFunction)pyopencv_FaceRecognizer_save, METH_VARARGS | METH_KEYWORDS, "save(filename) -> None"},
    {"train", (PyCFunction)pyopencv_FaceRecognizer_train, METH_VARARGS | METH_KEYWORDS, "train(src, labels) -> None"},
    {"update", (PyCFunction)pyopencv_FaceRecognizer_update, METH_VARARGS | METH_KEYWORDS, "update(src, labels) -> None"},

    {NULL,          NULL}
};

static void pyopencv_FaceRecognizer_specials(void)
{
    pyopencv_FaceRecognizer_Type.tp_base = &pyopencv_Algorithm_Type;
    pyopencv_FaceRecognizer_Type.tp_dealloc = pyopencv_FaceRecognizer_dealloc;
    pyopencv_FaceRecognizer_Type.tp_repr = pyopencv_FaceRecognizer_repr;
    pyopencv_FaceRecognizer_Type.tp_getset = pyopencv_FaceRecognizer_getseters;
    pyopencv_FaceRecognizer_Type.tp_methods = pyopencv_FaceRecognizer_methods;
}

static PyObject* pyopencv_SIFT_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<SIFT %p>", self);
    return PyString_FromString(str);
}



static PyGetSetDef pyopencv_SIFT_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_SIFT_defaultNorm(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_SIFT_Type))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    cv::SIFT* _self_ = dynamic_cast<cv::SIFT*>(((pyopencv_SIFT_t*)self)->v.get());
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->defaultNorm());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_SIFT_descriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_SIFT_Type))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    cv::SIFT* _self_ = dynamic_cast<cv::SIFT*>(((pyopencv_SIFT_t*)self)->v.get());
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_SIFT_descriptorType(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_SIFT_Type))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    cv::SIFT* _self_ = dynamic_cast<cv::SIFT*>(((pyopencv_SIFT_t*)self)->v.get());
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorType());
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_SIFT_methods[] =
{
    {"defaultNorm", (PyCFunction)pyopencv_SIFT_defaultNorm, METH_VARARGS | METH_KEYWORDS, "defaultNorm() -> retval"},
    {"descriptorSize", (PyCFunction)pyopencv_SIFT_descriptorSize, METH_VARARGS | METH_KEYWORDS, "descriptorSize() -> retval"},
    {"descriptorType", (PyCFunction)pyopencv_SIFT_descriptorType, METH_VARARGS | METH_KEYWORDS, "descriptorType() -> retval"},

    {NULL,          NULL}
};

static void pyopencv_SIFT_specials(void)
{
    pyopencv_SIFT_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_SIFT_Type.tp_dealloc = pyopencv_SIFT_dealloc;
    pyopencv_SIFT_Type.tp_repr = pyopencv_SIFT_repr;
    pyopencv_SIFT_Type.tp_getset = pyopencv_SIFT_getseters;
    pyopencv_SIFT_Type.tp_methods = pyopencv_SIFT_methods;
}

static PyObject* pyopencv_SURF_repr(PyObject* self)
{
    char str[1000];
    sprintf(str, "<SURF %p>", self);
    return PyString_FromString(str);
}


static PyObject* pyopencv_SURF_get_extended(pyopencv_SURF_t* p, void *closure)
{
    return pyopencv_from(dynamic_cast<cv::SURF*>(p->v.get())->extended);
}

static int pyopencv_SURF_set_extended(pyopencv_SURF_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the extended attribute");
        return -1;
    }
    return pyopencv_to(value, dynamic_cast<cv::SURF*>(p->v.get())->extended) ? 0 : -1;
}

static PyObject* pyopencv_SURF_get_hessianThreshold(pyopencv_SURF_t* p, void *closure)
{
    return pyopencv_from(dynamic_cast<cv::SURF*>(p->v.get())->hessianThreshold);
}

static int pyopencv_SURF_set_hessianThreshold(pyopencv_SURF_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the hessianThreshold attribute");
        return -1;
    }
    return pyopencv_to(value, dynamic_cast<cv::SURF*>(p->v.get())->hessianThreshold) ? 0 : -1;
}

static PyObject* pyopencv_SURF_get_nOctaveLayers(pyopencv_SURF_t* p, void *closure)
{
    return pyopencv_from(dynamic_cast<cv::SURF*>(p->v.get())->nOctaveLayers);
}

static int pyopencv_SURF_set_nOctaveLayers(pyopencv_SURF_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the nOctaveLayers attribute");
        return -1;
    }
    return pyopencv_to(value, dynamic_cast<cv::SURF*>(p->v.get())->nOctaveLayers) ? 0 : -1;
}

static PyObject* pyopencv_SURF_get_nOctaves(pyopencv_SURF_t* p, void *closure)
{
    return pyopencv_from(dynamic_cast<cv::SURF*>(p->v.get())->nOctaves);
}

static int pyopencv_SURF_set_nOctaves(pyopencv_SURF_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the nOctaves attribute");
        return -1;
    }
    return pyopencv_to(value, dynamic_cast<cv::SURF*>(p->v.get())->nOctaves) ? 0 : -1;
}

static PyObject* pyopencv_SURF_get_upright(pyopencv_SURF_t* p, void *closure)
{
    return pyopencv_from(dynamic_cast<cv::SURF*>(p->v.get())->upright);
}

static int pyopencv_SURF_set_upright(pyopencv_SURF_t* p, PyObject *value, void *closure)
{
    if (value == NULL)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the upright attribute");
        return -1;
    }
    return pyopencv_to(value, dynamic_cast<cv::SURF*>(p->v.get())->upright) ? 0 : -1;
}


static PyGetSetDef pyopencv_SURF_getseters[] =
{
    {(char*)"extended", (getter)pyopencv_SURF_get_extended, (setter)pyopencv_SURF_set_extended, (char*)"extended", NULL},
    {(char*)"hessianThreshold", (getter)pyopencv_SURF_get_hessianThreshold, (setter)pyopencv_SURF_set_hessianThreshold, (char*)"hessianThreshold", NULL},
    {(char*)"nOctaveLayers", (getter)pyopencv_SURF_get_nOctaveLayers, (setter)pyopencv_SURF_set_nOctaveLayers, (char*)"nOctaveLayers", NULL},
    {(char*)"nOctaves", (getter)pyopencv_SURF_get_nOctaves, (setter)pyopencv_SURF_set_nOctaves, (char*)"nOctaves", NULL},
    {(char*)"upright", (getter)pyopencv_SURF_get_upright, (setter)pyopencv_SURF_set_upright, (char*)"upright", NULL},
    {NULL}  /* Sentinel */
};

static PyObject* pyopencv_SURF_defaultNorm(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_SURF_Type))
        return failmsgp("Incorrect type of self (must be 'SURF' or its derivative)");
    cv::SURF* _self_ = dynamic_cast<cv::SURF*>(((pyopencv_SURF_t*)self)->v.get());
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->defaultNorm());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_SURF_descriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_SURF_Type))
        return failmsgp("Incorrect type of self (must be 'SURF' or its derivative)");
    cv::SURF* _self_ = dynamic_cast<cv::SURF*>(((pyopencv_SURF_t*)self)->v.get());
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_SURF_descriptorType(PyObject* self, PyObject* args, PyObject* kw)
{
    if(!PyObject_TypeCheck(self, &pyopencv_SURF_Type))
        return failmsgp("Incorrect type of self (must be 'SURF' or its derivative)");
    cv::SURF* _self_ = dynamic_cast<cv::SURF*>(((pyopencv_SURF_t*)self)->v.get());
    int retval;

    if(PyObject_Size(args) == 0 && (kw == NULL || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorType());
        return pyopencv_from(retval);
    }

    return NULL;
}



static PyMethodDef pyopencv_SURF_methods[] =
{
    {"defaultNorm", (PyCFunction)pyopencv_SURF_defaultNorm, METH_VARARGS | METH_KEYWORDS, "defaultNorm() -> retval"},
    {"descriptorSize", (PyCFunction)pyopencv_SURF_descriptorSize, METH_VARARGS | METH_KEYWORDS, "descriptorSize() -> retval"},
    {"descriptorType", (PyCFunction)pyopencv_SURF_descriptorType, METH_VARARGS | METH_KEYWORDS, "descriptorType() -> retval"},

    {NULL,          NULL}
};

static void pyopencv_SURF_specials(void)
{
    pyopencv_SURF_Type.tp_base = &pyopencv_Feature2D_Type;
    pyopencv_SURF_Type.tp_dealloc = pyopencv_SURF_dealloc;
    pyopencv_SURF_Type.tp_repr = pyopencv_SURF_repr;
    pyopencv_SURF_Type.tp_getset = pyopencv_SURF_getseters;
    pyopencv_SURF_Type.tp_methods = pyopencv_SURF_methods;
}
