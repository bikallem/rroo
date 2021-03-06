type element;

external null: unit => element = "nullElement";
let null = null();

external string: string => element = "stringElement";

external array: array(element) => element = "%identity";

type component('props) = 'props => element;

external createElement: (component('props), 'props) => element =
  "createElement";

external cloneElement: (component('props), 'props) => element =
  "cloneElement";

external createElementVariadic:
  (component('props), 'props, array(element)) => element =
  "createElementVariadic";

// module Ref = {
//   type t('value);

//   external current: t('value) => 'value = "Ref_current";
//   external setCurrent: (t('value), 'value) => unit = "Ref_setCurrent";
// };

// external createRef: unit => Ref.t(option('a)) = "createRef";

// module Children = {
//   external map: (element, element => element) => element = "Children_map";
//   external forEach: (element, element => unit) => unit = "Children_forEach";
//   external count: element => int = "Children_fffcount";
//   external only: element => element = "Children_only";
//   external toArray: element => array(element) = "Children_toArray";
// };

// module Context = {
//   type t('props);

//   [@bs.get]
//   external provider:
//     t('props) =>
//     component({
//       .
//       "value": 'props,
//       "children": element,
//     }) =
//     "Provider";
// };

// [@bs.module "react"] external createContext: 'a => Context.t('a) = "";

// [@bs.module "react"]
// external forwardRef:
//   ([@bs.uncurry] (('props, Js.Nullable.t(Ref.t('a))) => element)) =>
//   component('props) =
//   "";

// [@bs.module "react"]
// external memo: component('props) => component('props) = "";

// [@bs.module "react"]
// external memoCustomCompareProps:
//   (component('props), [@bs.uncurry] (('props, 'props) => bool)) =>
//   component('props) =
//   "memo";

// module Fragment = {
//   [@bs.obj]
//   external makeProps:
//     (~children: element, ~key: 'key=?, unit) => {. "children": element} =
//     "";
//   [@bs.module "react"]
//   external make: component({. "children": element}) = "Fragment";
// };

// module Suspense = {
//   [@bs.obj]
//   external makeProps:
//     (
//       ~children: element=?,
//       ~fallback: element=?,
//       ~maxDuration: int=?,
//       ~key: 'key=?,
//       unit
//     ) =>
//     {
//       .
//       "children": option(element),
//       "fallback": option(element),
//       "maxDuration": option(int),
//     } =
//     "";
//   [@bs.module "react"]
//   external make:
//     component({
//       .
//       "children": option(element),
//       "fallback": option(element),
//       "maxDuration": option(int),
//     }) =
//     "Suspense";
// };

/* HOOKS */

external useState: (unit => 'state) => ('state, ('state => 'state) => unit) =
  "useState";

external useReducer:
  (('state, 'action) => 'state, 'state) => ('state, 'action => unit) =
  "useReducer";

// [@bs.module "react"]
// external useReducerWithMapState:
//   (
//     [@bs.uncurry] (('state, 'action) => 'state),
//     'initialState,
//     'initialState => 'state
//   ) =>
//   ('state, 'action => unit) =
//   "useReducer";

// [@bs.module "react"]
// external useEffect: ([@bs.uncurry] (unit => option(unit => unit))) => unit =
//   "useEffect";
// [@bs.module "react"]
// external useEffect0:
//   ([@bs.uncurry] (unit => option(unit => unit)), [@bs.as {json|[]|json}] _) =>
//   unit =
//   "useEffect";
// [@bs.module "react"]
// external useEffect1:
//   ([@bs.uncurry] (unit => option(unit => unit)), array('a)) => unit =
//   "useEffect";
// [@bs.module "react"]
// external useEffect2:
//   ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b)) => unit =
//   "useEffect";
// [@bs.module "react"]
// external useEffect3:
//   ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c)) => unit =
//   "useEffect";
// [@bs.module "react"]
// external useEffect4:
//   ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c, 'd)) => unit =
//   "useEffect";
// [@bs.module "react"]
// external useEffect5:
//   ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c, 'd, 'e)) =>
//   unit =
//   "useEffect";
// [@bs.module "react"]
// external useEffect6:
//   ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c, 'd, 'e, 'f)) =>
//   unit =
//   "useEffect";
// [@bs.module "react"]
// external useEffect7:
//   (
//     [@bs.uncurry] (unit => option(unit => unit)),
//     ('a, 'b, 'c, 'd, 'e, 'f, 'g)
//   ) =>
//   unit =
//   "useEffect";

// [@bs.module "react"]
// external useLayoutEffect:
//   ([@bs.uncurry] (unit => option(unit => unit))) => unit =
//   "useLayoutEffect";
// [@bs.module "react"]
// external useLayoutEffect0:
//   ([@bs.uncurry] (unit => option(unit => unit)), [@bs.as {json|[]|json}] _) =>
//   unit =
//   "useLayoutEffect";
// [@bs.module "react"]
// external useLayoutEffect1:
//   ([@bs.uncurry] (unit => option(unit => unit)), array('a)) => unit =
//   "useLayoutEffect";
// [@bs.module "react"]
// external useLayoutEffect2:
//   ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b)) => unit =
//   "useLayoutEffect";
// [@bs.module "react"]
// external useLayoutEffect3:
//   ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c)) => unit =
//   "useLayoutEffect";
// [@bs.module "react"]
// external useLayoutEffect4:
//   ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c, 'd)) => unit =
//   "useLayoutEffect";
// [@bs.module "react"]
// external useLayoutEffect5:
//   ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c, 'd, 'e)) =>
//   unit =
//   "useLayoutEffect";
// [@bs.module "react"]
// external useLayoutEffect6:
//   ([@bs.uncurry] (unit => option(unit => unit)), ('a, 'b, 'c, 'd, 'e, 'f)) =>
//   unit =
//   "useLayoutEffect";
// [@bs.module "react"]
// external useLayoutEffect7:
//   (
//     [@bs.uncurry] (unit => option(unit => unit)),
//     ('a, 'b, 'c, 'd, 'e, 'f, 'g)
//   ) =>
//   unit =
//   "useLayoutEffect";

// [@bs.module "react"]
// external useMemo: ([@bs.uncurry] (unit => 'any)) => 'any = "useMemo";
// [@bs.module "react"]
// external useMemo0:
//   ([@bs.uncurry] (unit => 'any), [@bs.as {json|[]|json}] _) => 'any =
//   "useMemo";
// [@bs.module "react"]
// external useMemo1: ([@bs.uncurry] (unit => 'any), array('a)) => 'any =
//   "useMemo";
// [@bs.module "react"]
// external useMemo2: ([@bs.uncurry] (unit => 'any), ('a, 'b)) => 'any =
//   "useMemo";
// [@bs.module "react"]
// external useMemo3: ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c)) => 'any =
//   "useMemo";
// [@bs.module "react"]
// external useMemo4: ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c, 'd)) => 'any =
//   "useMemo";
// [@bs.module "react"]
// external useMemo5:
//   ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c, 'd, 'e)) => 'any =
//   "useMemo";
// [@bs.module "react"]
// external useMemo6:
//   ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c, 'd, 'e, 'f)) => 'any =
//   "useMemo";
// [@bs.module "react"]
// external useMemo7:
//   ([@bs.uncurry] (unit => 'any), ('a, 'b, 'c, 'd, 'e, 'f, 'g)) => 'any =
//   "useMemo";

// /* This is used as return values  */
// type callback('input, 'output) = 'input => 'output;

// [@bs.module "react"]
// external useCallback:
//   ([@bs.uncurry] ('input => 'output)) => callback('input, 'output) =
//   "useCallback";
// [@bs.module "react"]
// external useCallback0:
//   ([@bs.uncurry] ('input => 'output), [@bs.as {json|[]|json}] _) =>
//   callback('input, 'output) =
//   "useCallback";
// [@bs.module "react"]
// external useCallback1:
//   ([@bs.uncurry] ('input => 'output), array('a)) => callback('input, 'output) =
//   "useCallback";
// [@bs.module "react"]
// external useCallback2:
//   ([@bs.uncurry] ('input => 'output), ('a, 'b)) => callback('input, 'output) =
//   "useCallback";
// [@bs.module "react"]
// external useCallback3:
//   ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c)) =>
//   callback('input, 'output) =
//   "useCallback";
// [@bs.module "react"]
// external useCallback4:
//   ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c, 'd)) =>
//   callback('input, 'output) =
//   "useCallback";
// [@bs.module "react"]
// external useCallback5:
//   ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c, 'd, 'e)) =>
//   callback('input, 'output) =
//   "useCallback";
// [@bs.module "react"]
// external useCallback6:
//   ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c, 'd, 'e, 'f)) =>
//   callback('input, 'output) =
//   "useCallback";
// [@bs.module "react"]
// external useCallback7:
//   ([@bs.uncurry] ('input => 'output), ('a, 'b, 'c, 'd, 'e, 'f, 'g)) =>
//   callback('input, 'output) =
//   "useCallback";

// [@bs.module "react"] external useContext: Context.t('any) => 'any = "";

// [@bs.module "react"] external useRef: 'value => Ref.t('value) = "";

// [@bs.module "react"]
// external useImperativeHandle0:
//   (
//     Js.Nullable.t(Ref.t('value)),
//     [@bs.uncurry] (unit => 'value),
//     [@bs.as {json|[]|json}] _
//   ) =>
//   unit =
//   "useImperativeHandle";

// [@bs.module "react"]
// external useImperativeHandle1:
//   (
//     Js.Nullable.t(Ref.t('value)),
//     [@bs.uncurry] (unit => 'value),
//     array('a)
//   ) =>
//   unit =
//   "useImperativeHandle";

// [@bs.module "react"]
// external useImperativeHandle2:
//   (
//     Js.Nullable.t(Ref.t('value)),
//     [@bs.uncurry] (unit => 'value),
//     ('a, 'b)
//   ) =>
//   unit =
//   "useImperativeHandle";

// [@bs.module "react"]
// external useImperativeHandle3:
//   (
//     Js.Nullable.t(Ref.t('value)),
//     [@bs.uncurry] (unit => 'value),
//     ('a, 'b, 'c)
//   ) =>
//   unit =
//   "useImperativeHandle";

// [@bs.module "react"]
// external useImperativeHandle4:
//   (
//     Js.Nullable.t(Ref.t('value)),
//     [@bs.uncurry] (unit => 'value),
//     ('a, 'b, 'c, 'd)
//   ) =>
//   unit =
//   "useImperativeHandle";

// [@bs.module "react"]
// external useImperativeHandle5:
//   (
//     Js.Nullable.t(Ref.t('value)),
//     [@bs.uncurry] (unit => 'value),
//     ('a, 'b, 'c, 'd, 'e)
//   ) =>
//   unit =
//   "useImperativeHandle";

// [@bs.module "react"]
// external useImperativeHandle6:
//   (
//     Js.Nullable.t(Ref.t('value)),
//     [@bs.uncurry] (unit => 'value),
//     ('a, 'b, 'c, 'd, 'e, 'f)
//   ) =>
//   unit =
//   "useImperativeHandle";

// [@bs.module "react"]
// external useImperativeHandle7:
//   (
//     Js.Nullable.t(Ref.t('value)),
//     [@bs.uncurry] (unit => 'value),
//     ('a, 'b, 'c, 'd, 'e, 'f, 'g)
//   ) =>
//   unit =
//   "useImperativeHandle";

// [@bs.set]
// external setDisplayName: (component('props), string) => unit = "displayName";
