/*  */
#ifndef LIBGEOREC_CORRECTION_HXX
#define LIBGEOREC_CORRECTION_HXX

#include <utilities.hxx>

void correction_pitch(camera_t cam, Point2f src, Point2f& dst, double pitch_angle_deg);
void correction_pitch(camera_t cam, vecp2f src, vecp2f& dst, double pitch_angle_deg);

void correction_roll(camera_t cam, Point2f src, Point2f& dst, double roll_angle_deg);
void correction_roll(camera_t cam, vecp2f src, vecp2f& dst, double roll_angle_deg);

#endif
