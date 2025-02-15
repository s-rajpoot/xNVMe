/**
 * SPDX-FileCopyrightText: Samsung Electronics Co., Ltd
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * @headerfile libxnvme_adm.h
 */

/**
 * xNVMe options
 *
 * @see xnvme_dev_open()
 *
 * @struct xnvme_opts
 */
struct xnvme_opts {
	const char *be;    ///< Backend/system interface to use
	const char *dev;   ///< Device manager/enumerator
	const char *mem;   ///< Memory allocator to use for buffers
	const char *sync;  ///< Synchronous Command-interface
	const char *async; ///> Asynchronous Command-interface
	const char *admin; ///< Administrative Command-interface
	uint32_t nsid;     ///< Namespace identifier
	union {
		struct {
			uint32_t rdonly   : 1; ///< OS open; read-only
			uint32_t wronly   : 1; ///< OS open; write-only
			uint32_t rdwr     : 1; ///< OS open; for read and only
			uint32_t create   : 1; ///< OS open; create if it does not exist
			uint32_t truncate : 1; ///< OS open; truncate content
			uint32_t direct   : 1; ///< OS open; attempt bypass OS-caching
			uint32_t _rsvd    : 26;
		};
		uint32_t oflags;
	};
	uint32_t create_mode;     ///< OS file creation-mode
	uint8_t poll_io;          ///< io_uring: enable io-polling
	uint8_t poll_sq;          ///< io_uring: enable sqthread-polling
	uint8_t register_files;   ///< io_uring: enable file-regirations
	uint8_t register_buffers; ///< io_uring: enable buffer-registration
	struct {
		uint32_t value : 31;
		uint32_t given : 1;
	} css;                    ///< SPDK controller-setup: do command-set-selection
	uint32_t use_cmb_sqs;     ///< SPDK controller-setup: use controller-memory-buffer for sq
	uint32_t shm_id;          ///< SPDK multi-processing: shared-memory-id
	uint32_t main_core;       ///< SPDK multi-processing: main-core
	const char *core_mask;    ///< SPDK multi-processing: core-mask
	const char *adrfam;       ///< SPDK fabrics: address-family, IPv4/IPv6
	const char *subnqn;       ///< SPDK fabrics: Subsystem NQN
	const char *hostnqn;      ///< SPDK fabrics: Host NQN
	uint32_t admin_timeout;   ///< SPDK fabrics: enable admin command timeout
	uint32_t command_timeout; ///< SPDK fabrics: enable io command timeout
	uint32_t spdk_fabrics;    ///< Is assigned a value by backend if SPDK uses fabrics
};

/**
 * Initialize the given 'opts' with default values
 */
void
xnvme_opts_set_defaults(struct xnvme_opts *opts);

/**
 * Returns an initialized option-struct with default values
 *
 * @return Zero-initialized and with default values where applicable
 */
struct xnvme_opts
xnvme_opts_default(void);
