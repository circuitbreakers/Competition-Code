//move functions
//***nick:
//I will be constantly making functions for the robot

void forward(int speed, int time) {

  motor[right1] = speed;
  motor[right2] = speed;
  wait1Msec(time);
  stop();
}//end of move function

void turn(String direction, int speed, int time) {
if(direction == "right"){
int *= -1;
}
  motor[right1] = speed;
  motor[right2] = speed;
  motor[left1] = -speed;
  motor[left2] = -speed;
  wait1Msec(time);
  stop(); 
}

void stop(){
  motor[right1] = 0;
  motor[right2] = 0;
  motor[left1] = 0;
  motor[left2] = 0;
}

void lift(int speed, int time) {

   motor[lift1] = 75;
   motor[lift



}

