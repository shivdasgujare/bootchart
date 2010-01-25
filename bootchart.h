/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BOOTCHART_H
#define _BOOTCHART_H

extern int   bootchart_init(void);
extern int   bootchart_step(void);
extern void  bootchart_finish(void);

# define BOOTCHART_MAX_TIME_SEC        (10*60) /* max polling time in seconds */

#define EXIT_ON_TIMEOUT 0
#define TIMEOUT 180 /* default timeout 3 min */

# define BOOTCHART_POLLING_MS   100   /* polling period in ms (approx time taken for executing bootchart_step + any delay if want)*/
				      /* Takes 10 Samples in a sec */
#endif /* _BOOTCHART_H */
