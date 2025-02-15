/**
 * SPDX-FileCopyrightText: Samsung Electronics Co., Ltd
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * @headerfile libxnvme_spec_pp.h
 */

/**
 * Produces a string representation of the given ::xnvme_spec_adm_opc
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_adm_opc_str(enum xnvme_spec_adm_opc eval);

/**
 * Produces a string representation of the given ::xnvme_spec_csi
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_csi_str(enum xnvme_spec_csi eval);

/**
 * Produces a string representation of the given ::xnvme_spec_feat_id
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_feat_id_str(enum xnvme_spec_feat_id eval);

/**
 * Produces a string representation of the given ::xnvme_spec_feat_sel
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_feat_sel_str(enum xnvme_spec_feat_sel eval);

/**
 * Produces a string representation of the given ::xnvme_spec_flag
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_flag_str(enum xnvme_spec_flag eval);

/**
 * Produces a string representation of the given ::xnvme_spec_idfy_cns
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_idfy_cns_str(enum xnvme_spec_idfy_cns eval);

/**
 * Produces a string representation of the given ::xnvme_spec_log_lpi
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_log_lpi_str(enum xnvme_spec_log_lpi eval);

/**
 * Produces a string representation of the given ::xnvme_spec_znd_log_lid
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_znd_log_lid_str(enum xnvme_spec_znd_log_lid eval);

/**
 * Produces a string representation of the given ::xnvme_spec_nvm_cmd_cpl_sc
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_nvm_cmd_cpl_sc_str(enum xnvme_spec_nvm_cmd_cpl_sc eval);

/**
 * Produces a string representation of the given ::xnvme_spec_nvm_opc
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_nvm_opc_str(enum xnvme_spec_nvm_opc eval);

/**
 * Produces a string representation of the given ::xnvme_spec_psdt
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_psdt_str(enum xnvme_spec_psdt eval);

/**
 * Produces a string representation of the given ::xnvme_spec_sgl_descriptor_subtype
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_sgl_descriptor_subtype_str(enum xnvme_spec_sgl_descriptor_subtype eval);

/**
 * Produces a string representation of the given ::xnvme_spec_znd_cmd_mgmt_recv_action
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_znd_cmd_mgmt_recv_action_str(enum xnvme_spec_znd_cmd_mgmt_recv_action eval);

/**
 * Produces a string representation of the given ::xnvme_spec_znd_cmd_mgmt_recv_action_sf
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_znd_cmd_mgmt_recv_action_sf_str(enum xnvme_spec_znd_cmd_mgmt_recv_action_sf eval);

/**
 * Produces a string representation of the given ::xnvme_spec_znd_cmd_mgmt_send_action
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_znd_cmd_mgmt_send_action_str(enum xnvme_spec_znd_cmd_mgmt_send_action eval);

/**
 * Produces a string representation of the given ::xnvme_spec_znd_opc
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_znd_opc_str(enum xnvme_spec_znd_opc eval);

/**
 * Produces a string representation of the given ::xnvme_spec_znd_mgmt_send_action_so
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_znd_mgmt_send_action_so_str(enum xnvme_spec_znd_mgmt_send_action_so eval);

/**
 * Produces a string representation of the given ::xnvme_spec_znd_status_code
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_znd_status_code_str(enum xnvme_spec_znd_status_code eval);

/**
 * Produces a string representation of the given ::xnvme_spec_znd_state
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_znd_state_str(enum xnvme_spec_znd_state eval);

/**
 * Produces a string representation of the given ::xnvme_spec_znd_type
 *
 * @param eval the enum value to produce a string representation of
 * @return On success, a string representation is returned. On error, the string
 * "ENOSYS" is returned.
 */
const char *
xnvme_spec_znd_type_str(enum xnvme_spec_znd_type eval);
