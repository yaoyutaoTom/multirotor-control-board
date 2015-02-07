/*
 * elevAileMpcMatrices.h
 *
 *  Author: Tomas Baca
 */

#ifndef MPCMATRICES_H_
#define MPCMATRICES_H_

#include "CMatrixLib.h"

#define ATTITUDE_NUMBER_OF_STATES 		5
#define ATTITUDE_HORIZON_LEN			200
#define ATTITUDE_REDUCED_HORIZON_LEN	20

#define ATTITUDE_SYSTEM_DT				0.0114

#define ATTITUDE_MAX_SPEED				0.35

#define ATTITUDE_A_ROOF_HEIGHT				ATTITUDE_HORIZON_LEN*ATTITUDE_NUMBER_OF_STATES
#define ATTITUDE_A_ROOF_WIDTH				ATTITUDE_NUMBER_OF_STATES

#define ATTITUDE_Q_ROOF_DIAG_SIZE			ATTITUDE_HORIZON_LEN*ATTITUDE_NUMBER_OF_STATES

#define	ATTITUDE_B_ROOF_HEIGHT				ATTITUDE_HORIZON_LEN*ATTITUDE_NUMBER_OF_STATES
#define	ATTITUDE_B_ROOF_WIDTH				ATTITUDE_REDUCED_HORIZON_LEN

#define	ATTITUDE_H_INV_HEIGHT				ATTITUDE_REDUCED_HORIZON_LEN
#define	ATTITUDE_H_INV_WIDTH				ATTITUDE_REDUCED_HORIZON_LEN

#define ATTITUDE_ALLSTATE_REFERENCE_LEN		ATTITUDE_NUMBER_OF_STATES*ATTITUDE_HORIZON_LEN

const float A_roof_data_Attitude[ATTITUDE_A_ROOF_HEIGHT*ATTITUDE_A_ROOF_WIDTH];

const float Q_roof_diag_data_Attitude[ATTITUDE_Q_ROOF_DIAG_SIZE];

const float B_roof_data_Attitude[ATTITUDE_B_ROOF_HEIGHT*ATTITUDE_B_ROOF_WIDTH];

const float H_inv_data_Attitude[ATTITUDE_H_INV_HEIGHT*ATTITUDE_H_INV_WIDTH];

#endif /* MPCMATRICES_H_ */
