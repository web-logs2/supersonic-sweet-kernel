#ifndef __AWINIC_LOG_H__
#define __AWINIC_LOG_H__

/********************************************
 * print information control
 *******************************************/
#define aw_dev_err(dev, format, ...) \
	do { \
		pr_err("[Awinic][%s]%s: " format "\n", dev_name(dev), __func__, ##__VA_ARGS__); \
	} while(0)
#define aw_dev_info(dev, format, ...) \
	do { \
<<<<<<< HEAD
		pr_debug("[Awinic][%s]%s: " format "\n", dev_name(dev), __func__, ##__VA_ARGS__); \
=======
		pr_info("[Awinic][%s]%s: " format "\n", dev_name(dev), __func__, ##__VA_ARGS__); \
>>>>>>> 920ac74e4286 (techpack: audio: Build awinic codec for sweet/sweetin)
	} while(0)
#define aw_dev_dbg(dev, format, ...) \
	do { \
		pr_debug("[Awinic][%s]%s: " format "\n", dev_name(dev), __func__, ##__VA_ARGS__); \
	} while(0)

#define aw_pr_err(format, ...) \
		do { \
			pr_err("[Awinic]%s: " format "\n", __func__, ##__VA_ARGS__); \
		} while(0)
#define aw_pr_info(format, ...) \
		do { \
			pr_info("[Awinic]%s: " format "\n", __func__, ##__VA_ARGS__); \
		} while(0)
#define aw_pr_dbg(format, ...) \
		do { \
			pr_debug("[Awinic]%s: " format "\n", __func__, ##__VA_ARGS__); \
		} while(0)

#endif

