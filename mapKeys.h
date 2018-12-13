leftX = leftY = 0;
if(DOWN(124)) leftX += 1;
if(DOWN(126)) leftY -= 1;
if(DOWN(125)) leftY += 1;
options = DOWN(49);
R3 = DOWN(18);
L3 = DOWN(19);
O = DOWN(0);
R2 = DOWN(8);
touchpad = DOWN(11);
R1 = DOWN(14);
square = DOWN(2);
rightX = rightY = 0;
if(DOWN(5)) rightY += 1;
if(DOWN(3)) rightX -= 1;
dpadUp = DOWN(34);
if(DOWN(4)) rightX += 1;
dpadDown = DOWN(40);
dpadLeft = DOWN(38);
dpadRight = DOWN(37);
share = DOWN(45);
L1 = DOWN(12);
X = DOWN(1);
if(DOWN(17)) rightY -= 1;
triangle = DOWN(13);
PS = DOWN(9);
L2 = DOWN(6);
if(DOWN(123)) leftX -= 1;
if(mouseMoved) {
	rightX += mouseVelX * 1000;
	rightY -= mouseVelY * 1000;
	mouseMoved = false;
} else {
	rightX /= 1.2;
	rightY /= 1.2;
	if(fabs(rightX) > .05 || fabs(rightY) > .05) {
		NSLog(@"Still decaying... %f %f", rightX, rightY);
		[self decayKick];
	} else
		rightX = rightY = 0;
}
