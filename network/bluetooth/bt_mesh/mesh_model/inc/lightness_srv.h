/*
 * Copyright (C) 2015-2018 Alibaba Group Holding Limited
 */

#ifndef _ALI_MODEL_LIGHTNESS_SRV__H_
#define _ALI_MODEL_LIGHTNESS_SRV_H_

#ifdef CONFIG_ALI_SIMPLE_MODLE
#define LIGHTNESS_OPC_NUM 4
#define LIGHTNESS_DEFAULT 0xE666    //90%
#else
#define LIGHTNESS_OPC_NUM 14
#endif

#define MESH_MODEL_LIGHTNESS_SRV(_user_data) BT_MESH_MODEL(BT_MESH_MODEL_ID_LIGHT_LIGHTNESS_SRV, \
                                                g_lightness_op, &g_lightness_pub, _user_data)

extern struct bt_mesh_model_pub g_lightness_pub;
extern const struct bt_mesh_model_op g_lightness_op[LIGHTNESS_OPC_NUM];

void lightness_publication(struct bt_mesh_model *p_model);

void bind_lightness_with_onoff(S_ELEM_STATE *p_elem, E_VALUE_TYPE type);

#endif // _ALI_MODEL_LIGHTNESS_SRV_H_
