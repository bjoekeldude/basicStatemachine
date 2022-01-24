#include<iostream>

namespace impl
{
	struct stateEngine_T{
	private:
		using state = enum{
			panic_S,
			slowBlink_S,
			fastBlink_S
		};
		state nextState_;

		state panic(){
			while(true){
				//panic krams
			}
		}

		state runSlowBlink(){
			while(true){
				//funktion fürs lahme blinken
				if(false) return panic_S;
				if(false) return fastBlink_S;
			}
		}

		state runFastBlink(){
			while(true){
				//funktion fürs schnelle blinken
				if(false) return panic_S;
				if(false) return slowBlink_S;
			}
		}

	public:
		void exec(){
			while(true){
				switch(nextState_)
				{
					default:
					case panic_S:
						panic();
					case slowBlink_S:
						nextState_ = runSlowBlink();
						break;
					case fastBlink_S:
						nextState_ = runFastBlink();
						break;
				}
		

			}
		}

		stateEngine_T(){
			//Construktionsroutine
			nextState_ = slowBlink_S;
		}
	};
}


int main(){
	impl::stateEngine_T states{};
	states.exec();

}
