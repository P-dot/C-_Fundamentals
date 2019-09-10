// Keeping track of shapes 

enum shapeType {
    circle, 
    square, 
    rectangle
}; 

int main() {
    shapeType shape = circle;

    // Activities here ...
    // Now do something based on waht the shape is:
    switch(shape) {
        case circle: /*circle stuff */ break;
	case square: /* square stuff */ break;
	case rectangle: /* rectangle stuff */ break;
    } 
}
