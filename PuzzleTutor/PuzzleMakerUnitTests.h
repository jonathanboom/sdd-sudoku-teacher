/* The PuzzleMaker unit test class.
 * Members:
 *   testPuzzleMaker:
 *     A PuzzleMaker object to run tests on.
 *   testHelper:
 *     A Puzzle object to allow the use of tutor algorithms while testing the buildPuzzle methods.
 * Methods:
 *   The methods are described in the impelmentation, PuzzleMakerUnitTests.m.
 */

#import <Foundation/Foundation.h>

@class PuzzleMaker;
@class Puzzle;
 
@interface PuzzleUnitTests : NSObject 
{
    PuzzleMaker *testPuzzleMaker;
    Puzzle *testHelper;
}

- (int)runAllTests;
- (BOOL)testGivePuzzle;
- (BOOL)testBuildEasyPuzzle;
- (BOOL)testBuildMediumPuzzle;

@end
