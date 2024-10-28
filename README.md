# Activity 1

Drift = (Actual Frequency - Ideal Frequency) / Ideal * 60 Seconds/Minute * 60 Minutes/Hour

Busy Wait: No-op loop with 10000 iterations

| Test | Period | Frequency | Duty Cycle | Calculated 1 Hr. Drift |
| - | - | - | - | - |
| task_delay | 200.0043 ms | 4.99996 Hz | 50.0% | |
| task_delay w/busy wait | 207.9991 ms | 4.80764 Hz | 50.0% | |
| sleep | 200.0043 ms | 4.99996 Hz | 50.0% | |
| sleep w/busy wait | 209.6028 ms | 4.77095 Hz | 50.0% | |
| timer | 200.0043 ms | 4.99996 Hz | 50.0% | |
| timer w/busy wait | 200.0043 ms | 4.99996 Hz | 50.0% | |

As expected, timer.c was not affected by the busy-wait loop.

# Activity 2

Trigger delay - 7.9 micro-seconds
Trigger delay with busy-wait loop - 