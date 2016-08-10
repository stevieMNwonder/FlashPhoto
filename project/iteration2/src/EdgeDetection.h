#ifndef EDGEDETECTION_H
#define EDGEDETECTION_H

//
// EdgeDetection.h
// Created by Jacob Grafenstein
//

class ConvolutionFilter;

class EdgeDetection : public ConvolutionFilter {

public:
  EdgeDetection();
  ~EdgeDetection();
  void applyKernel(int x, int y,PixelBuffer *buf, PixelBuffer *temp);

private:
  float **xKernel;
  float **yKernel;
  void adjustKernel(float amount, int direction);
};


#endif
