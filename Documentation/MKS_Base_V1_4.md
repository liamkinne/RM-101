# MKS Base V1.4

## Pin Mappings

### Stepper Drivers

#### Key
- STEP: Output used to incriment the motor one step with a size determined by the Microstepping setting.
- DIR: Direction of motor rotation. 
- MS1: Microstep bit 1
- MS2: Microstep bit 2
- ENA: Enable pin which turns on the outputs when driven low.

#### X Axis

| Name | Port | Pin |
|------|------|-----|
| STEP | F    | 0   |
| DIR  | F    | 1   |
| MS1  | E    | 3   |
| MS2  | H    | 3   |
| ENA  | D    | 3   |
| CS   | B    | 3   |

#### Y Axis

| Name | Port | Pin |
|------|------|-----|
| STEP | F    | 6   |
| DIR  | F    | 7   |
| MS1  | F    | 5   |
| MS2  | F    | 4   |
| ENA  | F    | 2   |
| CS   | L    | 0   |

#### Z Axis

| Name | Port | Pin |
|------|------|-----|
| STEP | L    | 6   |
| DIR  | L    | 1   |
| MS1  | A    | 0   |
| MS2  | G    | 2   |
| ENA  | K    | 0   |
| CS   | G    | 1   |

#### E0 Axis

| Name | Port | Pin |
|------|------|-----|
| STEP | A    | 4   |
| DIR  | A    | 6   |
| MS1  | K    | 1   |
| MS2  | K    | 2   |
| ENA  | A    | 2   |
| CS   | G    | 1   |


#### E1 Axis

| Name | Port | Pin |
|------|------|-----|
| STEP | C    | 1   |
| DIR  | A    | 6   |
| MS1  | F    | 3   |
| MS2  | G    | 5   |
| ENA  | A    | 2   |
| CS   | L    | 7   |
