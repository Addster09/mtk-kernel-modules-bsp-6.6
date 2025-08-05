/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2024 MediaTek Inc.
 */

#ifndef _LOOM_H_
#define _LOOM_H_


int loom_init(void);
void loom_exit(void);


int loom_set_task_cfg(char *proc_name, char *thread_name,
	int pid, int mode, int matching_num, int prio, int cpu_mask,
	int set_exclusive, int loading_ub, int loading_lb, int bhr,
	int limit_min_freq, int limit_max_freq,
	int set_rescue, int rescue_f_opp, int rescue_c_freq, int rescue_time);
int loom_reset_task_cfg(char *proc_name, char *thread_name, int pid);

typedef void (*fpsgo2_game_loom_cb)(int rpid, int tgid, unsigned long long buf_id);

extern void set_task_priority_based_vip_and_throttle(int pid, int prio, unsigned int throttle_time);
extern void unset_task_priority_based_vip(int pid);
extern int vip_loom_select_cfg_apply(int val, int caller_id);
extern int vip_loom_flt_cfg_apply(int val, int caller_id);
extern void (*fpsgo2game_noitfy_loom_queue_end_fp)(int rpid, int tgid, unsigned long long buf_id);

#endif  // _LOOM_H_
