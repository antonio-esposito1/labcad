"""
Questo codice è stato preso da libro "Learning Python" a pag 653
Calcola total, best-of e best-of-total"

"""

import time, sys
timer = time.process_time
#timer = time.perf_counter

def total(reps, func, *pargs, **kargs):
    """
    Total time to run func() reps time
    Return(total time, last result)
    """

    repslist = list(range(reps))
    start = timer()
    for i in repslist:
        ret = func(*pargs, **kargs)
    elapsed = timer() - start
    return(elapsed, ret)

def bestof(reps, func, *pargs, **kargs):
    """
     Quickest func() among reps runs.
     Return(best time, last result)
    """

    best = 2**32
    for i in range(reps):
        start = timer()
        ret = func(*pargs, **kargs)
        elapsed = timer() - start
        if elapsed < best: best = elapsed
    return(best, ret)

def bestoftotal(reps1, reps2, func, *pargs, **kargs):
    """
    Best of total:
    (best of reps1 runs of (total of reps2 run of func))
    """

    return bestof(reps1, total, reps2, func, *pargs, **kargs)